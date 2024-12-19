/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:33:37 by atudor            #+#    #+#             */
/*   Updated: 2024/12/16 14:33:39 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Clapster");

	clap1.attack("TargetDummy");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.takeDamage(10);
	clap1.attack("AnotherDummy");
	return 0;
}
