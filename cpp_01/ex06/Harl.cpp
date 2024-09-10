/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:28:07 by atudor            #+#    #+#             */
/*   Updated: 2024/09/04 15:28:09 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void Harl::info()
{
	std::cout << GRAY << "[INFO]    " << DEFAULT;
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << YELLOW << "[WARNING] " << DEFAULT;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << RED << "[ERROR]   " << DEFAULT;
	std::cout << "This is unacceptable. I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*level_ptr_array[4])() = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string level_str_array[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == level_str_array[i])
		{
			(this->*level_ptr_array[i])();
			break;
		}
	}
}

