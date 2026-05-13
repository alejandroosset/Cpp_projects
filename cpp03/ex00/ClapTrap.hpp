/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:19:24 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/12 17:29:58 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class clapTrap
{
	private:
		std::string name;
		int hitPoints = 10;
		int energyPoints = 10;
		int attackDamage = 10;
	public:
		clapTrap(std::string name);
		clapTrap(const clapTrap& other);
		clapTrap& operator=(const clapTrap& other);
		~clapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
};

#endif