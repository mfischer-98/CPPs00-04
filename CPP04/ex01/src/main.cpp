/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:40:32 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 11:26:43 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"
#include <iostream>
#include <string>

int main()
{
	// std::cout << "BASIC TEST\n" << std::endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;

	// std::cout << "*ANIMAL LOOP TEST*" << std::endl;

	// int size = 4;
	// const Animal* animal[size];
	
	// for (int k = 0; k < size; k++)
	// {
	// 	if (k < (size / 2))
	// 		animal[k] = new Dog();
	// 	else
	// 		animal[k] = new Cat();
	// }

	// for (int k = 0; k < size; k++)
	// 	delete animal[k];

	std::cout << "\nDEEP TEST" << std::endl;

	Cat* cat = new Cat();

	cat->getBrain().setIdea("meow", 0);
    cat->getBrain().setIdea("purr", 1);
    cat->getBrain().setIdea("must destroy", 2);
    cat->getBrain().setIdea("hungry", 3);

	for (int i = 0; i < 4; i++)
		std::cout << "\nIdea " << i << ": " << cat->getBrain().getIdea(i) << std::endl;

	std::cout << "\nCOPY & ASSIGNMENT TEST" << std::endl;

	Cat catCopy(*cat);
	Cat* assigned = new Cat();

	*assigned = *cat;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "\nIdea " << i << ": " << catCopy.getBrain().getIdea(i) << std::endl;
		std::cout << "\nIdea " << i << ": " << assigned->getBrain().getIdea(i) << std::endl;
	}
		
	delete cat;
	delete assigned;

	return 0;
}