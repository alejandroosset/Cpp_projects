/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:17:51 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/18 16:36:00 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool gate;
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};
#endif