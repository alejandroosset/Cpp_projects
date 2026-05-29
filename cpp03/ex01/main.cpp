/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:19:34 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/29 17:38:52 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "### TESTING SCAVTRAP ###" << std::endl;
	{
		std::cout << std::endl << "Constructing" << std::endl << std::endl;
		ScavTrap a("Gabro");
		ScavTrap b("Riebeck");

		std::cout << std::endl << "Testing" << std::endl << std::endl;
		a.attack("some robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other robot");
		b.beRepaired(3);
		for (int i = 0; i < 54; i++)
			b.attack("clone");
		b.beRepaired(3);
		a.guardGate();
		a.guardGate();
		std::cout << std::endl << "Deconstructing" << std::endl << std::endl;
	}
	return (0);
}