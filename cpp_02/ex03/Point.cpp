/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:26:41 by atudor            #+#    #+#             */
/*   Updated: 2024/11/03 13:26:43 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(Point const &src) : x(src.x), y(src.y)
{
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(Point const &rhs)
{
	(void)rhs;
	return *this;
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}


