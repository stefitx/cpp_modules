/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:28:00 by atudor            #+#    #+#             */
/*   Updated: 2024/09/04 15:28:02 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define DEFAULT "\033[0m"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;97m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"
# define CYAN "\001\033[1;96m\002"


class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
