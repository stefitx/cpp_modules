/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:34:33 by atudor            #+#    #+#             */
/*   Updated: 2024/10/28 15:34:35 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = copy.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(value * (1 << _bits));
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

int Fixed::toInt(void) const
{
	return _value >> _bits;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &value) const
{
	return _value > value.getRawBits();
}

bool Fixed::operator<(const Fixed &value) const
{
	return _value < value.getRawBits();
}

bool Fixed::operator>=(const Fixed &value) const
{
	return _value >= value.getRawBits();
}

bool Fixed::operator<=(const Fixed &value) const
{
	return _value <= value.getRawBits();
}

bool Fixed::operator==(const Fixed &value) const
{
	return _value == value.getRawBits();
}

bool Fixed::operator!=(const Fixed &value) const
{
	return _value != value.getRawBits();
}

Fixed Fixed::operator+(const Fixed &value) const
{
	return Fixed(toFloat() + value.toFloat());
}

Fixed Fixed::operator-(const Fixed &value) const
{
	return Fixed(toFloat() - value.toFloat());
}

Fixed Fixed::operator*(const Fixed &value) const
{
	return Fixed(toFloat() * value.toFloat());
}

Fixed Fixed::operator/(const Fixed &value) const
{
	return Fixed(toFloat() / value.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_value++;
	return tmp;
}

Fixed Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_value--;
	return tmp;
}

Fixed Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}