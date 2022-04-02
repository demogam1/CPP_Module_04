/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:28:48 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:22:10 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        /* Forme Canonique */ 
        Dog();
        Dog(const Dog &p);
        Dog &operator=(const Dog &p);
        virtual ~Dog();
        /* END */
        void makeSound() const;
};