/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:56 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/26 16:20:47 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int Size;
        std::vector<int> v;
    public:
        // Constructors and destructors
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        // Excepciones
        class ArrayCompleteException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        // Functions
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};
#endif