/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:35:14 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 10:10:06 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
	this->_type = "None";
}

Animal::Animal(const std::string& animalType) : _type(animalType) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

/* SETTERS & GETTERS */

void	Animal::setType(std::string animalType) {
	this->_type = animalType;
}

std::string	Animal::getType() const {
	return this->_type;
}

/* MEMBER FUNCTIONS */

void Animal::makeSound() const {
	std::cout << "Animal noise not identified." << std::endl;
}