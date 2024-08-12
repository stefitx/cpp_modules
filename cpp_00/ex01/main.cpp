/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:33:55 by atudor            #+#    #+#             */
/*   Updated: 2024/07/17 20:33:56 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string request;

	while (request != "EXIT")
	{
		std::cout << CYAN << "What would you like to do next?" << RESET << std::endl;
		std::cout << GREEN << "Type ADD, SEARCH or EXIT." << RESET << std::endl;
		std::getline(std::cin, request);
		if (request == "ADD")
			PhoneBook.add();
		else if (request == "SEARCH")
			PhoneBook.search();
		else if (request != "EXIT")
			std::cout << RED << "We can't do that, but you can try ADD, SEARCH or EXIT." << RESET << std::endl;
	}
	return (0);
}