/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:33:01 by atudor            #+#    #+#             */
/*   Updated: 2024/07/17 20:33:04 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::init(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->Nickname = Nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
}

std::string resize(std::string str)
{
	int str_size = str.length();
	std::string tmp;
	
	if (str_size > 10)
	{
		str.resize(9);
		str.insert(str.end(), '.');
	}
	else if (str_size < 10)
	{
		str.resize(10);
		for (int i = 0; i < 10 - str_size; i++)
			tmp += " ";
		str = tmp + str;
	}
	return (str);
}

void Contact::display_all()
{
	std::string FirstName = this->FirstName;
	std::string LastName = this->LastName;
	std::string Nickname = this->Nickname;

	std::cout << resize(FirstName) << "|";
	std::cout << resize(LastName) << "|";
	std::cout << resize(Nickname) << "|" << RESET << std::endl;
}

void Contact::display_one()
{
	std::cout << BLUE << "First Name: " << this->FirstName << RESET << std::endl;
	std::cout << YELLOW << "Last Name: " << this->LastName << RESET << std::endl;
	std::cout << BLUE << "Nickname: " << this->Nickname << RESET << std::endl;
	std::cout << YELLOW << "Phone Number: " << this->PhoneNumber << RESET << std::endl;
	std::cout << BLUE << "Darkest Secret: " << this->DarkestSecret << RESET << std::endl;
}