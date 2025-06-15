/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+      */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:11:46 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 16:57:42 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5), target("default_target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const &t) :
	AForm("PresidentialPardonForm", 25, 5), target(t)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	AForm(other), target(other.target)
{}

PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;		// nothing to assign, everything is const
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!isItSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > gradeRequiredToExecute())
		throw GradeTooLowException();

	std::cout << target
			  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

