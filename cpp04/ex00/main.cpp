/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:57:13 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 09:52:27 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== TEST ANIMALES CORRECTOS ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTipos:" << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "\nSonidos:" << std::endl;
    meta->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete meta;
    delete dog;
    delete cat;

    return 0;
}
