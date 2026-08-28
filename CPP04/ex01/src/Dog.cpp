/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:20:56 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 11:36:19 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called." << std::endl;
	setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->_brain = new Brain(*other._brain);
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		this->setType(other.getType());
		*this->_brain = *other._brain;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
	this->_brain = NULL;
}

/* MEMBER FUNCTIONS */

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Brain& Dog::getBrain(void) {
	return *this->_brain;
}