/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:50:06 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/15 16:40:52 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void setName(std::string name);
        ~Zombie();
        void announce();
};

Zombie* zombieHorde(int N, std::string name);
#endif