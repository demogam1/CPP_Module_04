/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:38:35 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 15:48:46 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        /* Forme Canonique */ 
        WrongCat();
        WrongCat(const WrongCat &p);
        WrongCat &operator=(const WrongCat &p);
        virtual ~WrongCat();
        /* END */      
        void makeSound() const;  
};