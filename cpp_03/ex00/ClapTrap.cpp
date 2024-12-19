/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:33:19 by atudor            #+#    #+#             */
/*   Updated: 2024/12/16 14:33:20 by atudor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap is born." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_hitpoints == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack." << std::endl;
		return ;
	}
	this->_energy_points -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
		return ;
	}
	this->_hitpoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 0 || this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired." << std::endl;
		return ;
	}
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}
