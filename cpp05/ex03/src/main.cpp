/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:05 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 12:06:55 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	srand(time(NULL));
	
	std::cout << "\033[33m" << "TESTEANDO SHRUBBERYCREATIONFORM" << "\033[0m" << std::endl;

	Bureaucrat boss("Alice", 1);
	Bureaucrat weak("John", 150);
	ShrubberyCreationForm SForm("home");

	std::cout << weak;
	std::cout << boss;
	std::cout << SForm;

	weak.signForm(SForm);
	weak.executeForm(SForm);
	
	boss.signForm(SForm);
	boss.executeForm(SForm);

	std::cout << "\033[33m" << "TESTEANDO ROBOTOMYREQUESTFORM" << "\033[0m" << std::endl;
	RobotomyRequestForm RForm("home");

	std::cout << weak;
	std::cout << boss;
	std::cout << RForm;

	weak.signForm(RForm);
	weak.executeForm(RForm);
	
	boss.signForm(RForm);
	boss.executeForm(RForm);

	std::cout << "\033[33m" << "TESTEANDO PRESIDENTIALPARDONFORM" << "\033[0m" << std::endl;
	PresidentialPardonForm PForm("home");

	std::cout << weak;
	std::cout << boss;
	std::cout << PForm;

	weak.signForm(PForm);
	weak.executeForm(PForm);
	
	boss.signForm(PForm);
	boss.executeForm(PForm);

	std::cout << "\033[33m" << std::endl << "Test ex03 Intern" << "\033[0m" << std::endl;

	Intern Jr_Intern;
	AForm *robo_intern;

	robo_intern = Jr_Intern.makeForm("DoYouKnowMe", "Hmmmm");
	robo_intern = Jr_Intern.makeForm("RobotomyRequestForm", "World");

	std::cout << robo_intern->GetName() << std::endl;
	delete robo_intern;
	return 0;
}