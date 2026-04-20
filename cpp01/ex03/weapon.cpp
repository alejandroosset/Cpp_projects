/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:07:41 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/17 13:11:32 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(const std::string &value)
{
    this->type = value;
}