/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:02:44 by atudor            #+#    #+#             */
/*   Updated: 2025/06/06 21:19:53 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat okto("Okto", 5);
	Bureaucrat stefi("Stefi", 140);

	Form giveTIG("giveTIG", 100, 50);
	Form freeze("Freeze form", 10, 10);

	std::cout << giveTIG << std::endl;
	std::cout << freeze << std::endl;

	stefi.signForm(giveTIG);   // should fail (grade 140 > 100)
	okto.signForm(giveTIG);     // should succeed
	okto.signForm(freeze);     // succeed
	stefi.signForm(freeze);   // still prints fail (already signed or low grade)

	std::cout << giveTIG << std::endl;
	std::cout << freeze << std::endl;
}

