/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:12:22 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 17:30:13 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signature;
		const int sign;
		const int exec;
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		AForm(std::string name, const int sign, const int exec);

		const std::string getName() const;
		bool isItSigned() const;
		int gradeRequiredToSign() const;
		int gradeRequiredToExecute() const;
		
		virtual void execute(Bureaucrat const & executor) const = 0;

		class FormNotSignedException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

		class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
		class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
		void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif
