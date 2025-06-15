/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:31:04 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 16:59:17 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	/* ------------------------------------------------------------ *
	 *  1)  Create some bureaucrats                                 *
	 * ------------------------------------------------------------ */
	Bureaucrat low("Larry-Low", 150);     // worst grade
	Bureaucrat mid("Mary-Mid", 70);       // can sign robotomy
	Bureaucrat hi ("Hank-Hi",  1);        // can do everything

	std::cout << low << mid << hi << std::endl;

	/* ------------------------------------------------------------ *
	 *  2)  Create one instance of each concrete form               *
	 * ------------------------------------------------------------ */
	ShrubberyCreationForm shrub("backyard");
	RobotomyRequestForm   robo ("Bender-unit-22");
	PresidentialPardonForm pardon("Arthur Dent");

	/* ------------------------------------------------------------ *
	 *  3)  Try to execute before signing – should throw            *
	 * ------------------------------------------------------------ */
	std::cout << "-- Attempting to execute unsigned forms --" << std::endl;
	hi.executeForm(shrub);
	hi.executeForm(robo);
	hi.executeForm(pardon);

	/* ------------------------------------------------------------ *
	 *  4)  Signing phase                                           *
	 * ------------------------------------------------------------ */
	std::cout << std::endl << "-- Signing phase --" << std::endl;

	low.signForm(shrub);     // fails (needs ≤145)
	mid.signForm(shrub);     // succeeds
	mid.signForm(robo);      // succeeds (needs ≤72)
	mid.signForm(pardon);    // fails (needs ≤25)
	hi .signForm(pardon);    // succeeds

	std::cout << std::endl;

	/* ------------------------------------------------------------ *
	 *  5)  Execution phase                                         *
	 * ------------------------------------------------------------ */
	std::cout << "-- Execution phase --" << std::endl;

	low.executeForm(shrub);   // fails – exec grade is 137
	mid.executeForm(shrub);   // succeeds – creates file
	std::cout << std::endl;

	mid.executeForm(robo);    // succeeds / fails randomly
	mid.executeForm(robo);    // run again to show 50 % chance
	std::cout << std::endl;

	mid.executeForm(pardon);  // fails – grade 70 > 5
	hi .executeForm(pardon);  // succeeds

	return 0;
}

