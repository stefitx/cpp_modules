/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:34:40 by atudor            #+#    #+#             */
/*   Updated: 2024/10/28 15:34:42 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(int const value);
		Fixed(float const value);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(const Fixed &value) const;
		bool	operator<(const Fixed &value) const;
		bool	operator>=(const Fixed &value) const;
		bool	operator<=(const Fixed &value) const;
		bool	operator==(const Fixed &value) const;
		bool	operator!=(const Fixed &value) const;
		Fixed	operator+(const Fixed &value) const;
		Fixed	operator-(const Fixed &value) const;
		Fixed	operator*(const Fixed &value) const;
		Fixed	operator/(const Fixed &value) const;
		Fixed	operator++(int);
		Fixed	operator++();
		Fixed	operator--(int);
		Fixed	operator--();
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
