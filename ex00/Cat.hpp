/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:06:31 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:22:13 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        /* Forme Canonique */ 
        Cat();
        Cat(const Cat &p);
        Cat &operator=(const Cat &p);
        virtual ~Cat();
        /* END */      
        void makeSound() const;  
};