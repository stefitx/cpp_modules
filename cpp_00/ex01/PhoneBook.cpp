/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:33:27 by atudor            #+#    #+#             */
/*   Updated: 2024/07/17 20:33:29 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->count = 0;
	std::cout << MAGENTA << "Hello! Welcome to your new shiny PhoneBook. You may add up to 8 contacts." << RESET << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << MAGENTA << "Goodbye, we hope you had a great experience! :)" << RESET << std::endl;
}

void PhoneBook::add()
{
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
	Contact contact;

	while (FirstName.empty())
	{
		std::cout << BLUE << "Please enter your new contact's first name." << RESET << std::endl;
		std::getline(std::cin, FirstName);
	}
	while (LastName.empty())
	{
		std::cout << YELLOW << "Please enter your new contact's last name." << RESET << std::endl;
		std::getline(std::cin, LastName);
	}
	while (Nickname.empty())
	{
		std::cout << BLUE << "Please enter your new contact's nickname." << RESET << std::endl;
		std::getline(std::cin, Nickname);
	}
	while (PhoneNumber.empty())
	{
		std::cout << YELLOW << "Please enter your new contact's phone number." << RESET << std::endl;
		std::getline(std::cin, PhoneNumber);
	}
	while (DarkestSecret.empty())
	{
		std::cout << BLUE << "Please enter your new contact's darkest secret." << RESET << std::endl;
		std::getline(std::cin, DarkestSecret);
	}
	contact.init(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
	this->contacts[this->count % 8] = contact;
	this->count++;
}

void PhoneBook::search()
{	
	int i = 0;
	std::string index;

	if (this->count == 0)
	{
		std::cout << RED << "You have no contacts yet!" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "     Index|First Name| Last Name|  Nickname" << RESET << std::endl;
	while (i < this->count && i < 8)
	{
		std::cout << "         " << i + 1 << "|";
		this->contacts[i].display_all();
		i++;
	}
	std::cout << GREEN << "Which contact you would like to see?" << RESET << std::endl;
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '1' && index[0] <= '8' && index[0] - '0' <= this->count)
	{
		i = index[0] - '1';
		this->contacts[i].display_one();
	}
	else
		std::cout << RED << "There is no contact with that index number!" << RESET << std::endl;
}