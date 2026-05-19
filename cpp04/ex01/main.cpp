/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:57:13 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 13:12:52 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n=== ARRAY DE ANIMALES ===\n" << std::endl;

	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n=== SONIDOS ===\n" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	std::cout << "\n=== DEEP COPY DOG ===\n" << std::endl;

	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Quiero un hueso");

	Dog copyDog(originalDog);

	std::cout << "Original idea: "
			  << originalDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "Copy idea: "
			  << copyDog.getBrain()->getIdea(0) << std::endl;

	originalDog.getBrain()->setIdea(0, "Quiero dormir");

	std::cout << "\nTras modificar el original:\n" << std::endl;

	std::cout << "Original idea: "
			  << originalDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "Copy idea: "
			  << copyDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n=== DEEP COPY CAT (ASSIGNMENT) ===\n" << std::endl;

	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "Cazar ratones");

	Cat assignCat;
	assignCat = originalCat;

	std::cout << "Original idea: "
			  << originalCat.getBrain()->getIdea(0) << std::endl;

	std::cout << "Assigned idea: "
			  << assignCat.getBrain()->getIdea(0) << std::endl;

	originalCat.getBrain()->setIdea(0, "Dormir en el sofá");

	std::cout << "\nTras modificar el original:\n" << std::endl;

	std::cout << "Original idea: "
			  << originalCat.getBrain()->getIdea(0) << std::endl;

	std::cout << "Assigned idea: "
			  << assignCat.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n=== DELETE ANIMALS ===\n" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}
