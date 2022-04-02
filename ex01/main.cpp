/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:06:57 by misaev            #+#    #+#             */
/*   Updated: 2022/03/31 15:37:28 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{

    Animal *ani_tab[10];

    for (int cat = 0; cat < 5; cat++)
    {
        ani_tab[cat] = new Cat();
    }
    for (int dog = 5 ; dog < 10; dog++)
    {
        ani_tab[dog] = new Dog();
    }
    
    for (int cat = 0; cat < 10; cat++)
    {
       delete ani_tab[cat];
    }
    // while(1); <--- Pour tester les leaks
    return 0; 
}