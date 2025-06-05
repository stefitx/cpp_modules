/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:02:44 by atudor            #+#    #+#             */
/*   Updated: 2025/06/05 21:13:57 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try
	{
		Bureaucrat stefi("Stefi", 2);
		std::cout << stefi;
		stefi.incrementGrade();
		std::cout << stefi;
		stefi.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat frank("Frank", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
