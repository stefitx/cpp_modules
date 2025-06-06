/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:12:22 by atudor            #+#    #+#             */
/*   Updated: 2025/06/06 21:39:45 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool signature;
		const int sign;
		const int exec;
	public:
		Form();
		~Form();
		Form(const Form &other);
		Form &operator=(const Form &other);
		Form(std::string name, const int sign, const int exec);

		const std::string getName() const;
		bool isItSigned() const;
		int gradeRequiredToSign() const;
		int gradeRequiredToExecute() const;

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

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif
