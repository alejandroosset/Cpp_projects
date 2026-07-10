/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:31:41 by aosset-o          #+#    #+#             */
/*   Updated: 2026/07/10 17:21:02 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
class Data
{
	private:
		std::string name;
		int age;
	public:
		Data(std::string name, int age);
        Data(const Data& other);
        Data& operator=(const Data& other);
        ~Data();
};
#endif