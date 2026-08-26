/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:29:48 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 10:47:49 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors & Destructor*/

ClapTrap::ClapTrap() : _name("Default") , _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& str) : _name(str), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Claptrap " << _name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "Copy constructor called, copying from " << other._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called, assigning from " << other._name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << _name << " has been destroyed." << std::endl;
}


/* Getters */

unsigned int	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

std::string ClapTrap::getName() const {
	return this->_name;
}


/* Member Functions */

void ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " already destroyed." << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy and cannot attack." << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints > 0)
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		if (amount > UINT_MAX - _hitPoints)
			_hitPoints = UINT_MAX;
		else
			_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " heals itself, recovering " << amount
					<< " hitPoints!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot be repaired." << std::endl;
}
