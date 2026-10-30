/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:47 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/30 18:56:51 by aosset-o         ###   ########.fr       */
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
        std::vector<int> vec;
        std::deque<int> deq;
    public:
        // Constructores y destructor
        PmergeMe(void);
		~PmergeMe(void);
        PmergeMe(PmergeMe const&);
		PmergeMe&	operator=(PmergeMe const&);

        void ParseInput(int ac, char *av[]);
};
#endif