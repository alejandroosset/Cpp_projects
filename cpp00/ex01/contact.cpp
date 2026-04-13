/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:49:13 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/08 17:49:17 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int contact::getIndex()
{
	return(index);
}

std::string contact::getFirstName()
{
	return(firstName);
}

std::string contact::getLastName()
{
	return(lastName);
}

std::string contact::getNickName()
{
	return(nickName);
}

std::string contact::getPhoneNumber()
{
	return(phoneNumber);
}

std::string contact::getDarkSecret()
{
	return(darkSecret);
}

void contact::setIndex(int i)
{
	index = i;
}

void contact::setFirstName(std::string str)
{
	firstName = str;
}

void contact::setLastName(std::string str)
{
	lastName = str;
}

void contact::setNickName(std::string str)
{
	nickName = str;
}

void contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}
void contact::setDarkSecret(std::string str)
{
	darkSecret = str;
}