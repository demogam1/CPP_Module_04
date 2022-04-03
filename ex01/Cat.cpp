/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:48 by misaev            #+#    #+#             */
/*   Updated: 2022/04/03 07:33:33 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*------------------Forme canonique------------------*/

Cat::Cat()
{
    std::cout << GRN << "Cat Constructor Called" << NC << std::endl;
    this->type = "Cat";
    this->idea = new Brain();
}

Cat::Cat(const Cat &p)
{
    this->type = p.type;
    this->idea = new Brain(*p.idea);
}

Cat &Cat::operator=(const Cat &p)
{
    delete this->idea;
    this->type = p.type;
    this->idea = new Brain(*p.idea);
    return *this;
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destructor Called" << NC << std::endl;
    delete this->idea;
}

/*------------------END------------------*/

void Cat::makeSound() const
{
    std::cout << CYN_B << this->type << " make Miaouw" << NC << std::endl;
    return;
}
