/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:11:23 by atudor            #+#    #+#             */
/*   Updated: 2025/06/15 16:57:29 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const &t );
		PresidentialPardonForm( PresidentialPardonForm const &other );
		PresidentialPardonForm &operator=( PresidentialPardonForm const &other );
		~PresidentialPardonForm( void );

		void execute( Bureaucrat const &executor ) const;
};

#endif

