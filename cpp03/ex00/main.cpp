/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:19:34 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/13 19:33:31 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "### TESTING CLAPTRAP ###" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ClapTrap a("Wall-e");
		ClapTrap b("Eva");

		std::cout << "Testing" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "Deconstructing" << std::endl;
	}
	return (0);
}