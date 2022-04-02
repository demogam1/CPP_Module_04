/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:19:15 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:10:45 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*--------------Forme Canonique---------------*/
Animal::Animal()
{
    std::cout << GRN << "Animal Contructor called" << NC << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &p)
{
    this->type = p.type;
}

Animal &Animal::operator=(const Animal &p)
{
    this->type = p.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "Animal Destructor called" << NC << std::endl;   
}
/*--------------END---------------*/

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << CYN << this->type << " make some animal noise" << NC << std::endl;
    return;
}