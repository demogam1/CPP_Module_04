/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:07:05 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:41:52 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"

class Dog : virtual public Animal 
{
    public:
        /* Forme Canonique */
        Dog();
        Dog(const Dog &p);
        Dog &operator=(const Dog &p);
        virtual ~Dog();
        /* END */
        virtual void makeSound() const;
    private:
        Brain *idea;
};