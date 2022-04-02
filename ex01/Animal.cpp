/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:25:05 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:54:26 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*------------------Forme canonique------------------*/ 
Animal::Animal()
{
    std::cout << GRN << "Animal Constructor Called" << NC << std::endl;
    this->type = "Animal";
    return;
}

Animal::Animal(const Animal &p)
{
    this->type = p.type;
    return;
}

Animal &Animal::operator=(const Animal &p)
{
    this->type = p.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "Animal Destructor Called" << NC << std::endl;
    return;
}
/*------------------END------------------*/
void    Animal::makeSound(void ) const
{
    std::cout << CYN_B << this->type << " make some animal noise" << NC << std::endl;
    return;
}

std::string Animal::getType() const
{
    return this->type;
}