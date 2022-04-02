/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_main.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:58:21 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 16:03:42 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    WrongAnimal *toto = new WrongAnimal();
    WrongAnimal *titi = new WrongCat();

    std::cout << toto->getType() << std::endl;
    std::cout << titi->getType() << std::endl;
    toto->makeSound();
    titi->makeSound();
}