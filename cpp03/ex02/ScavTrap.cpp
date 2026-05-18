/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:17:46 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/18 16:36:48 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scavtrap default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->gate = false;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructoe called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
    else if(this->energyPoints < 0)
        std::cout << "ScavTrap has insufficient energy points." << std::endl;
    else
        std::cout << "ScavTrap is dead =( ." << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->gate == false)
    {
        std::cout << this->name << " is now in guard Gate keeper mode." << std::endl;
        this->gate = true;
    }
    else
        std::cout << this->name << " is already in guard Gate keeper mode." << std::endl;        
}