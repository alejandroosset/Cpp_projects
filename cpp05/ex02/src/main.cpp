/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:05 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 15:08:03 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "TESTEANDO SHRUBBERYCREATIONFORM" << std::endl << std::endl;

	Bureaucrat boss("Alice", 1);
	ShrubberyCreationForm form("home");

	std::cout << boss;
	std::cout << form;

	boss.signForm(form);

	

	return 0;
}