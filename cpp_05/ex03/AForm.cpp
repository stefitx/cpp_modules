/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:12:10 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 15:34:20 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name("anther useless form"), signature(false), sign(150), exec(1)
{}

AForm::~AForm()
{}

AForm::AForm(const AForm &other): name(other.name), signature(other.signature), sign(other.sign), exec(other.exec)
{}

AForm& AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->signature = other.signature;
	return *this;
}

AForm::AForm(std::string name, const int sign, const int exec): name(name), signature(false), sign(sign),  exec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}

const std::string AForm::getName() const
{
	return this->name;
}

bool AForm::isItSigned() const
{
	return this->signature;
}

int AForm::gradeRequiredToSign() const
{
	return this->sign;
}

int AForm::gradeRequiredToExecute() const
{
	return this->exec;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("Grade too low!");
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > sign)
		throw GradeTooLowException();
	else
		signature = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "Name: " << f.getName() << " is signed? " << f.isItSigned() << " Grade required to sign: " << f.gradeRequiredToSign() << " Grade required to execute: " << f.gradeRequiredToExecute() << std::endl;
	return (os);
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return("This form is not signed!");
}

