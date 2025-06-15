/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:14:25 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 17:21:15 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat boss("Zaphod", 1);
	Intern     slave;

	/* 1) valid request --------------------------------------------------- */
	AForm *f1 = slave.makeForm("robotomy request", "Bender");
	if (f1)
	{
		boss.signForm(*f1);
		boss.executeForm(*f1);
		delete f1;
	}

	/* 2) another valid request ------------------------------------------ */
	AForm *f2 = slave.makeForm("shrubbery creation", "office");
	if (f2)
	{
		boss.signForm(*f2);
		boss.executeForm(*f2);
		delete f2;
	}

	/* 3) invalid request ------------------------------------------------- */
	AForm *f3 = slave.makeForm("form 42B", "Nowhere");
	if (f3)            // will be NULL => nothing happens
		delete f3;

	return 0;
}

