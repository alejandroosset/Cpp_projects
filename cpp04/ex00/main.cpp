/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:57:13 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 13:12:01 by aosset-o         ###   ########.fr       */
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

    std::cout << "\n=== TEST WRONG ANIMAL ===" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nTipos:" << std::endl;
    std::cout << wrongMeta->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    std::cout << "\nSonidos:" << std::endl;
    wrongMeta->makeSound();
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
