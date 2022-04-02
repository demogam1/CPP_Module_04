/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:53 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:55:20 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


/*------------------Forme canonique------------------*/
Dog::Dog()
{
    std::cout << GRN << "Dog Constructor Called" << NC << std::endl;
    this->type = "Dog";
    this->idea = new Brain();
    return;
}

Dog::Dog(const Dog &p)
{
    this->type = p.type;
    this->idea = new Brain(*p.idea);
}

Dog &Dog::operator=(const Dog &p)
{
    this->type = p.type;
    this->idea = new Brain(*p.idea);
    return *this;
}

Dog::~Dog()
{
    std::cout << RED << "Dog Destructor Called" << NC << std::endl;
    delete this->idea;
    return;
}
/*------------------END------------------*/
void Dog::makeSound() const
{
    std::cout << CYN_B << this->type << " make Woof Woof" << NC << std::endl;
    return;
}