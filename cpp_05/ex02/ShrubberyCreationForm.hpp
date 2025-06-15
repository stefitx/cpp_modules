/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:47:35 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 17:09:37 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string target;
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &other );
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

		ShrubberyCreationForm( std::string const &target);
		void execute(Bureaucrat const &executor) const;
};

#endif
