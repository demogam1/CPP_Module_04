/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:57 by misaev            #+#    #+#             */
/*   Updated: 2022/04/01 18:22:57 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{

    Animal *toto = new Animal();
    Animal *titi = new Cat();

    toto->makeSound();
    titi->makeSound();
    // while(1); <--- Pour tester les leaks
    return 0; 
}