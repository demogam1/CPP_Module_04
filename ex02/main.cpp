/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:57 by misaev            #+#    #+#             */
/*   Updated: 2022/05/04 09:01:09 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{

    // Animal *toto = new Animal();
    // Animal  toto;
    Animal *titi = new Cat();

    // toto->makeSound();
    titi->makeSound();
    // while(1); <--- Pour tester les leaks
    return 0; 
}