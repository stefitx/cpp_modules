/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:11:01 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 16:57:02 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", 72, 45), target("default_target")
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &t) :
	AForm("RobotomyRequestForm", 72, 45), target(t)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	AForm(other), target(other.target)
{}

RobotomyRequestForm &
RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;		// attributes are const – nothing to copy
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isItSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > gradeRequiredToExecute())
		throw GradeTooLowException();

	std::cout << "* BZZZZZZ… vrRrRR… DRILLING NOISES *" << std::endl;
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy of " << target << " failed. Better luck next time." << std::endl;
}

