/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:27:42 by atudor            #+#    #+#             */
/*   Updated: 2024/11/03 13:27:44 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed triangleArea(const Point &a, const Point &b, const Point &c)
{
    return Fixed((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
                 (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
                 (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed totalArea = triangleArea(a, b, c).toFloat();

    Fixed areaPAB = triangleArea(point, a, b).toFloat();
    Fixed areaPBC = triangleArea(point, b, c).toFloat();
    Fixed areaPCA = triangleArea(point, c, a).toFloat();

    return (areaPAB + areaPBC + areaPCA == totalArea) && 
           (areaPAB > 0 && areaPBC > 0 && areaPCA > 0);
}
