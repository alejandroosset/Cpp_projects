/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:05:45 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/24 13:47:04 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printValue(T &value)
{
	std::cout << value << std::endl;
}

void incrementInt(int &value)
{
	++value;
}

int main( void ) 
{
	int numbers[] = {1, 2, 3, 4, 5};
	const std::size_t length = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "Original values:" << std::endl;
	iter(numbers, length, printValue<int>);

	iter(numbers, length, incrementInt);
	std::cout << "After increment:" << std::endl;
	iter(numbers, length, printValue<int>);

	double decimals[] = {1.5, 2.5, 3.5};
	const std::size_t decimalLength = sizeof(decimals) / sizeof(decimals[0]);
	std::cout << "Double values:" << std::endl;
	iter(decimals, decimalLength, printValue<double>);

	std::string words[] = {"one", "two", "three"};
	const std::size_t wordLength = sizeof(words) / sizeof(words[0]);
	std::cout << "String values:" << std::endl;
	iter(words, wordLength, printValue<std::string>);

	return (0);
}