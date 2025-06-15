/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:10:42 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 16:56:32 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>   // rand, srand
#include <ctime>     // time

class RobotomyRequestForm : public AForm
{
	private:
		const std::string target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const &t );
		RobotomyRequestForm( RobotomyRequestForm const &other );
		RobotomyRequestForm &operator=( RobotomyRequestForm const &other );
		~RobotomyRequestForm( void );

		void execute( Bureaucrat const &executor ) const;
};

#endif

