/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:26 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:31:39 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain
{
    public:
        /* Forme Canonique */ 
        Brain();
        Brain(const Brain &p);
        Brain &operator=(const Brain &p);
        virtual ~Brain();
        /* END */
    protected:
        std::string idea[100];
};