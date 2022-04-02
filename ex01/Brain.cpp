/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:57 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 11:55:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*------------------Forme canonique------------------*/
Brain::Brain()
{
    std::cout << GRN << "Brain Constructor Called" << NC << std::endl;
}

Brain &Brain::operator=(const Brain &p)
{
    for (int i = 0; i < 100; i++)
    {
        this->idea[i] = p.idea[i];
    }
    return *this;
}

Brain::Brain(const Brain &p)
{
    for (int i = 0; i < 100; i++)
    {
        this->idea[i] = p.idea[i];
    }
}

Brain::~Brain()
{
    std::cout << RED << "Brain Destructor Called" << std::endl;    
}
/*------------------END------------------*/

