/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:38:30 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:49:24 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*--------------Forme Canonique---------------*/
WrongCat::WrongCat()
{
    std::cout << GRN << "WrongCat Constructor called" << NC << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &p)
{
    this->type = p.type;
}

WrongCat &WrongCat::operator=(const WrongCat &p)
{
    this->type = p.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat Destructor Called" << NC << std::endl;    
}
/*--------------END---------------*/
void WrongCat::makeSound() const
{
     std::cout << CYN << this->type << ": 'Miaou' " << NC << std::endl;
}