/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:05:06 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/18 18:15:41 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointValue = 0;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = nbr * 1 << this->bits;
}

Fixed::Fixed(float const nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(nbr * (1 << this->bits));
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if(this != &other)
		this->fixedPointValue = other.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedPointValue / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPointValue >> this->bits);
}

std::ostream &operator<<(std::ostream &nbr, Fixed const &fixed)
{
	nbr << fixed.toFloat();
	return (nbr);
}

bool	Fixed::operator>(Fixed fixed)const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed fixed)const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed fixed)const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed fixed)const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed fixed)const
{
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed fixed)const
{
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed fixed)const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return(tmp);
}

Fixed	Fixed::operator-(Fixed fixed)const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return(tmp);
}

Fixed	Fixed::operator*(Fixed fixed)const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * fixed.getRawBits() >> this->bits);
	return(tmp);
}

Fixed	Fixed::operator/(Fixed fixed)const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() / fixed.getRawBits() << this->bits);
	return(tmp);
}

Fixed	Fixed::operator++()
{
	this->fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->fixedPointValue--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++this->fixedPointValue;
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->fixedPointValue;
	return(tmp);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if  (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}
const	Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if  (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if  (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
}

const	Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	if  (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
}