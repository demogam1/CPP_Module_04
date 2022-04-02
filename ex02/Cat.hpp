/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:07:06 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:41:56 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"


class Cat : virtual public Animal
{
    public:
        /* Forme Canonique */
        Cat();
        Cat(const Cat &p);
        Cat &operator=(const Cat &p);
        virtual ~Cat();
        /* END */
        virtual void makeSound() const;
    private:
        Brain *idea;
};