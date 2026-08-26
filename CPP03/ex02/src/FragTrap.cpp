/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:41:13 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 15:11:46 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

/* Constructors & Destructor*/

FragTrap::FragTrap() : ClapTrap() {
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called, copying from " << _name << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap assignment operator called, assigning from " << _name << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
}

/* Member Functions */

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests high-fives from everybody! " << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " already destroyed." << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " has no energy and cannot attack." << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}
