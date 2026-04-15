/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:48:58 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/15 17:11:49 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	int size;
	
	size = 12;
	zombies = zombieHorde(size, "Luis");
	for(int i = 0; i < size; i++)
		zombies[i].announce();
	delete [] zombies;
	return(0);
}