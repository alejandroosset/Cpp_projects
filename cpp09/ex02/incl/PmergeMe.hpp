/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:47 by aosset-o          #+#    #+#             */
/*   Updated: 2026/11/25 19:55:14 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <limits>

struct Element
{
    int value;
    int id;            
};
class PmergeMe
{
    private:
        int size;
        std::vector<Element>vec;
    public:
        // Constructores y destructor
        PmergeMe(int size);
		~PmergeMe(void);
        PmergeMe(PmergeMe const&);
		PmergeMe&	operator=(PmergeMe const&);

        void ParseInput(int ac, char *av[]);
        // Vector functions
        void CreateVec (char *av[]);
        void SortPairs();
        void PrintPairs();
        void FordJohnsonVec();
};
#endif