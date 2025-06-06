/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:12:10 by atudor            #+#    #+#             */
/*   Updated: 2025/06/06 21:42:01 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("anther useless form"), signature(false), sign(150), exec(1)
{}

Form::~Form()
{}

Form::Form(const Form &other): name(other.name), signature(other.signature), sign(other.sign), exec(other.exec)
{}

Form& Form::operator=(const Form &other)
{
	if (this != &other)
		this->signature = other.signature;
	return *this;
}

Form::Form(std::string name, const int sign, const int exec): name(name), signature(false), sign(sign),  exec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooHighException();
}

const std::string Form::getName() const
{
	return this->name;
}

bool Form::isItSigned() const
{
	return this->signature;
}

int Form::gradeRequiredToSign() const
{
	return this->sign;
}

int Form::gradeRequiredToExecute() const
{
	return this->exec;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low!");
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > sign)
		throw GradeTooLowException();
	else
		signature = true;
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Name: " << f.getName() << " is signed? " << f.isItSigned() << " Grade required to sign: " << f.gradeRequiredToSign() << " Grade required to execute: " << f.gradeRequiredToExecute() << std::endl;
	return (os);
}
