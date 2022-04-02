/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:28:34 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 13:14:53 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*--------------Forme Canonique---------------*/
Dog::Dog()
{
    std::cout << GRN << "Dog Constructor Called" << NC << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &p)
{
    this->type = p.type;
}

Dog &Dog::operator=(const Dog &p)
{
    this->type = p.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << RED << "Dog Destructor Called" << NC << std::endl;    
}
/*--------------END---------------*/
void Dog::makeSound() const
{
    std::cout << CYN << this->type << " : 'Woof' " << NC << std::endl;
}