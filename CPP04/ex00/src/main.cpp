/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:40:32 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 09:34:16 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n-- ANIMAL TESTS --" << std::endl;
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << "-- WRONG ANIMAL TESTS --" << std::endl;

	const WrongAnimal *wrong = new WrongCat();
	std::cout << std::endl;

	std::cout << wrong->getType() << " " << std::endl;

	wrong->makeSound();
	std::cout << std::endl;

	delete wrong;
	return 0;
}