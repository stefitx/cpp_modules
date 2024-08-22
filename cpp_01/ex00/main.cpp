/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:23:28 by atudor            #+#    #+#             */
/*   Updated: 2024/08/22 20:23:30 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Annabelle the zombie princess");
	zombie->announce();
	delete zombie;
	randomChump("TheRandomChump");
	return (0);
}