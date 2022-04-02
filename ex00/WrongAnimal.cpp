/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:37:11 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:37:36 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*--------------Forme Canonique---------------*/
WrongAnimal::WrongAnimal()
{
    std::cout << GRN << "WrongAnimal Contructor called" << NC << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &p)
{
    this->type = p.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &p)
{
    this->type = p.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal Destructor called" << NC << std::endl;   
}
/*--------------END---------------*/

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << CYN << this->type << " make some WrongAnimal noise" << NC << std::endl;
    return;
}