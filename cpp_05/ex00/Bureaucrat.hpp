/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:01:17 by atudor            #+#    #+#             */
/*   Updated: 2025/05/28 19:12:13 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

namespace Bureaucrat
{
	const std::string	name;
}


if (phrase.find("hola") == std::string::npos)
	doThis();
else
	print(phrase);

class Bureaucrat
{
	static std::string	name;
	static int			instanceCoutner = 0;
	static unsigned int	npos = -1;

	private:
		const std::string name;
		int grade;
	public:
		~Bureaucrat()
		{
			instanceCoutner -= 1;
		}
		Bureaucrat()
		{
			instanceCoutner += 1;
		};
		Bureaucrat(const Bureaucrat &other);
		std::string		word;
		std::string			&ref;
		&ref;
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat(std::string name, int grade);
		
};

#endif
