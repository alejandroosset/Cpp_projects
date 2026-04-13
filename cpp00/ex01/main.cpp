/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:49:10 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/08 17:49:11 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    phonebook ph1;
    std::string str;
    while (str != "EXIT" && !std::cin.eof())
    {
        getline(std::cin, str);
        if(str.compare("ADD") == 0)
            ph1.phonebookAdd();
        if(str.compare("SEARCH") == 0)
            ph1.phonebookSearch();
    }
}