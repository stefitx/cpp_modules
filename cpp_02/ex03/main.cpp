/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:34:20 by atudor            #+#    #+#             */
/*   Updated: 2024/10/28 15:34:21 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);

    Point pInside(2.5f, 2.0f);
    Point pOutside(5.0f, 5.0f);
    Point pOnEdge(2.5f, 0.0f);

    // Test point inside
    std::cout << "Point inside: " << bsp(a, b, c, pInside) << std::endl;

    // Test point outside
    std::cout << "Point outside: " << bsp(a, b, c, pOutside) << std::endl;

    // Test point on edge
    std::cout << "Point on edge: " << bsp(a, b, c, pOnEdge) << std::endl;

    return 0;
}
