/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:51 by aosset-o          #+#    #+#             */
/*   Updated: 2026/11/25 19:28:38 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    PmergeMe sort(ac - 1);
    try
    {
        sort.ParseInput(ac, av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sort.CreateVec(av);
    sort.SortPairs();
    sort.PrintPairs();    
}