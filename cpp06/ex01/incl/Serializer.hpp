/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:52:28 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/21 12:53:54 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	public:
		// Constructors and destructors
        Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        ~Serializer();
        //functions
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
#endif