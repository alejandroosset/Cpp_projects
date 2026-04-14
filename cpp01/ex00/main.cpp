/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:48:58 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/13 18:39:07 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *heapZombie;
	
	heapZombie = newZombie("Patroclo");
	heapZombie->announce();
	randomChump("Aquiles");
	delete heapZombie;
	return(0);
}