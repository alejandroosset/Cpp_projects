/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:05 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/10 16:47:16 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	//Decrementing too low exception
	Bureaucrat a("Alice", 149);

	std::cout << a;

	std::cout << "Decrementing grade..." << std::endl;
	a.DecrementGrade();
	std::cout << a;

	std::cout << "Decrementing grade..." << std::endl;
	a.DecrementGrade();
	std::cout << a;
	
	//Incrementing too high exception
	Bureaucrat high("Carol", 2);

	std::cout << high;
	
	std::cout << "Incrementing grade..." << std::endl;
	high.IncrementGrade();
	std::cout << high;
	std::cout << "Incrementing grade..." << std::endl;
	high.IncrementGrade();
	std::cout << high;

	//creating too low exception
	Bureaucrat too_low("Bob", 151);
	
	//creating too high exception
	Bureaucrat too_high("Bob", 0);
	return 0;
}