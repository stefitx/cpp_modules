/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:01:17 by atudor            #+#    #+#             */
/*   Updated: 2025/06/06 21:33:36 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);

		const std::string getName()const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

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

		void signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif
