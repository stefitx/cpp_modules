/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:14:00 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 17:22:48 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

/* Orthodox Canonical ------------------------------------------------------ */

Intern::Intern() {}
Intern::Intern(Intern const &) {}
Intern &Intern::operator=(Intern const &) { return *this; }
Intern::~Intern() {}

/* ----  private helper creators (static, file-scope)  --------------------- */

static AForm *newShrubbery(std::string const &t)
{ return new ShrubberyCreationForm(t); }

static AForm *newRobotomy(std::string const &t)
{ return new RobotomyRequestForm(t); }

static AForm *newPardon(std::string const &t)
{ return new PresidentialPardonForm(t); }

/* ----  lookup table ------------------------------------------------------ */

struct FormPair
{
	const char*                name;
	AForm* (*creator)(std::string const &);
};

static FormPair const table[3] = {
	{ "shrubbery creation",   &newShrubbery },
	{ "robotomy request",     &newRobotomy  },
	{ "presidential pardon",  &newPardon    }
};

/* ----  public interface -------------------------------------------------- */

AForm*	Intern::makeForm(std::string const &name,
						   std::string const &target) const
{
	for (int i = 0; i < 3; ++i)
	{
		if (name == table[i].name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return table[i].creator(target);
		}
	}
	std::cout << "Intern: \"" << name << "\" is an unknown form type"
			  << std::endl;
	return 0;
}

