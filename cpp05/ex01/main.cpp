/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:05 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/09 17:07:21 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void printb(Bureaucrat &b)
{
	std::cout << "El burocrata " << b.GetName() << " tiene este rango " << b.GetGrade() << std::endl;
}

int main()
{
	try
	{
		Bureaucrat a("Alice", 149);

		printb(a);

		std::cout << "Decrementing grade..." << std::endl;
		a.DecrementGrade();
		printb(a);

		std::cout << "Decrementing grade..." << std::endl;
		a.DecrementGrade();
		printb(a);
	}
	catch (const std::string &error)
	{
		std::cerr << error;
	}
	try
	{	
		Bureaucrat high("Carol", 1);
		printb(high);
		std::cout << "Incrementing grade..." << std::endl;
		high.IncrementGrade();
		printb(high);
	}
	catch (const std::string &error)
	{
		std::cerr << error;
	}
	try
	{
		Bureaucrat low("Bob", 151);
	}
	catch (const std::string &error)
	{
		std::cerr << error;
	}
	try
	{
		Bureaucrat high("Bob", 0);
	}
	catch (const std::string &error)
	{
		std::cerr << error;
	}
	return 0;
}