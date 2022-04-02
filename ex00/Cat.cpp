/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:09:28 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 13:15:32 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*--------------Forme Canonique---------------*/
Cat::Cat()
{
    std::cout << GRN << "Cat Constructor called" << NC << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &p)
{
    this->type = p.type;
}

Cat &Cat::operator=(const Cat &p)
{
    this->type = p.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destructor Called" << NC << std::endl;    
}
/*--------------END---------------*/
void Cat::makeSound() const
{
     std::cout << CYN << this->type << ": 'Miaou' " << NC << std::endl;
}