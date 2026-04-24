/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:12:48 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/24 19:58:34 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << DEFAULT << "Harl has appeared." << std::endl;
}

Harl::~Harl(void)
{
    std::cout << DEFAULT << "Harl flew away." << std::endl;
}

void Harl::debug(void)
{
    std::cout << RED 
    << "I love having extra bacon for my 7XL-double-cheese"
    << "-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << YELLOW 
    << "I cannot believe adding extra bacon costs more money." 
    << " You didn’t putenough bacon in my burger! If you did, I wouldn’t"
    << " be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << MAGENTA
    << "I think I deserve to have some extra bacon for free. I’ve "
    << "been coming for years, whereas you started working here just last month."
    << std::endl;
}

void Harl::error(void)
{
    std::cout << CYAN
    << "This is unacceptable! I want to speak to the manager now." 
    << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if(complain[i] == level)
        {
            (this->*ptr_complain[i])();
            break;
        }
    }
}