/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:18:23 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 11:35:13 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called." << std::endl;
	setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	this->_brain = new Brain(*other._brain);
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		this->setType(other.getType());
		*this->_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
	this->_brain = NULL;
}

/* MEMBER FUNCTIONS */

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

Brain& Cat::getBrain(void) {
	return *this->_brain;
}
