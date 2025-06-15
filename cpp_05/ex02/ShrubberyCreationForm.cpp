/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:47:23 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 17:12:02 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():  AForm("ShrubberyCreationForm", 145, 137), target("archnemesis_house")
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{}

ShrubberyCreationForm&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): target(target)
{}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!isItSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > gradeRequiredToExecute())
        throw GradeTooLowException();

    std::ofstream file((target + "_shrubbery").c_str());
    file << "       _-_       \n"
            "    /~~   ~~\\    \n"
            " /~~         ~~\\ \n"
            "{               }\n"
            " \\  _-     -_  / \n"
            "   ~  \\\\ //  ~  \n"
            "_- -   | | _- _  \n"
            "  _ -  | |   -_  \n"
            "      // \\\\      \n";
    file.close();
}
