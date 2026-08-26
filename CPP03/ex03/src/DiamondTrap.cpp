/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:00:13 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 15:27:44 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

/* CONSTRUCTORS & DESTRUCTOR */

DiamondTrap::DiamondTrap() : ClapTrap() {
	_name = "Default_clap_name";
	name = "Default";
	_hitPoints = 50;
	_energyPoints = 50;
	_attackDamage = 50;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& newName) :
	ClapTrap(newName + "_clap_name"), FragTrap(newName), ScavTrap(newName), name(newName)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name)
{
	std::cout << "DiamondTrap copy constructor called, copying from " << name << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap assignment operator called, assigning from " << name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " has been destroyed" << std::endl;
}

/* MEMBER FUNCTIONS */

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Presenting robot name " << name << ", ClapTrap name "
			<< _name << ". Ready to fight!" << std::endl;
}
