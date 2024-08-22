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

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: ./zombieHorde <number of zombies> <name>" << std::endl;
		return (1);
	}
	int N = std::stoi(argv[1]);
	std::string name = argv[2];
	Zombie *zombies = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}