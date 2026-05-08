/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:04:57 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/08 13:18:35 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class fixed
{
	private:
		int fixed_point;
		const static int bits = 8;
	public:
		fixed(int fixed_point);
		fixed(const fixed& other);
		fixed& operator=(const fixed& other);
		~fixed();
};
#endif