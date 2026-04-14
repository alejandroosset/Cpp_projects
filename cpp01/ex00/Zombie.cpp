/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:35:51 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/13 18:32:54 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << "Destructor called: memory deallocated" << std::endl;
}
void Zombie::announce()
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}