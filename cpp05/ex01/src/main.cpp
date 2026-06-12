/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:05 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 12:09:25 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void)
{
	std::cout << "TESTEANDO BUROCRATAS" << std::endl << std::endl;
	
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

	std::cout << "TESTEANDO FORMS" << std::endl << std::endl;

	//burocrata puede firmar
	Bureaucrat s("Paco", 110);
	std::cout << s;
	try
	{
		Form f("Form", 120, 120);
		std::cout << f;
		s.signForm(f);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what();
	}

	//burocrata no puede firmar
	try
	{
		Form f("Form", 100, 100);
		std::cout << f;
		s.signForm(f);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what();
	}

	//No se puede crear form por grade inválio
	try
	{
		Form f("Form", 0, 120);
		std::cout << f;
		s.signForm(f);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what();
	}
	return 0;
}