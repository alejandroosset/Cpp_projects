/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:47 by aosset-o          #+#    #+#             */
/*   Updated: 2026/11/16 18:34:56 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <limits>

class PmergeMe
{
    private:
        std::vector< std::pair <int, int> >vec;
        std::deque<int> deq;
        int size;
        int pend;
    public:
        // Constructores y destructor
        PmergeMe(int size);
		~PmergeMe(void);
        PmergeMe(PmergeMe const&);
		PmergeMe&	operator=(PmergeMe const&);

        void ParseInput(int ac, char *av[]);
        void CreatePairs (char *av[]);
        void SortPairs();
        void PrintPairs();
};
#endif