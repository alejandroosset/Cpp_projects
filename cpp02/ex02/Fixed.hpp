/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:04:57 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/11 18:25:21 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedPointValue;
		const static int bits = 8;
	public:
		Fixed();
		Fixed(int const nbr);
		Fixed(float const nbr);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int  getRawBits(void) const;
		void setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(Fixed fixed)const;
	bool	operator<(Fixed fixed)const;
	bool	operator>=(Fixed fixed)const;
	bool	operator<=(Fixed fixed)const;
	bool	operator==(Fixed fixed)const;
	bool	operator!=(Fixed fixed)const;

	Fixed	operator+(Fixed fixed)const;
	Fixed	operator-(Fixed fixed)const;
	Fixed	operator*(Fixed fixed)const;
	Fixed	operator/(Fixed fixed)const;

	Fixed	operator++();
	Fixed	operator--();

	Fixed	operator++(int fixed);
	Fixed	operator--(int fixed);

	static	Fixed &min(Fixed &first, Fixed &second);
	static	const Fixed &min(Fixed const &first, Fixed const &second);
	static	Fixed &max(Fixed &first, Fixed &second);
	static	const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream &operator<<(std::ostream &nbr, Fixed const &fixed);

#endif