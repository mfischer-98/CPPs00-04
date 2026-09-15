/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:40:32 by mefische          #+#    #+#             */
/*   Updated: 2026/09/15 12:31:25 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main()
{
	// std::cout << "BASIC TEST\n" << std::endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// j->makeSound();
	// i->makeSound();

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

	// std::cout << "\nDEEP TEST" << std::endl;

	// Cat* cat = new Cat();

	// cat->getBrain().setIdea("meow", 0);
	// cat->getBrain().setIdea("purr", 1);
	// cat->getBrain().setIdea("must destroy", 2);
	// cat->getBrain().setIdea("hungry", 3);

	// for (int i = 0; i < 4; i++)
	// 	std::cout << "\nIdea " << i << ": " << cat->getBrain().getIdea(i) << std::endl;

	// std::cout << "\nCOPY & ASSIGNMENT" << std::endl;

	// Cat catCopy(*cat);
	// Cat* assigned = new Cat();

	// *assigned = *cat;

	// std::cout << "\n--- Copied ideas ---" << std::endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	std::cout << "\nIdea " << i << ": " << catCopy.getBrain().getIdea(i) << std::endl;
	// 	std::cout << "\nIdea " << i << ": " << assigned->getBrain().getIdea(i) << std::endl;
	// }

	// std::cout << "\n--- Modify copies ---" << std::endl;

	// catCopy.getBrain().setIdea("CHANGED COPY", 0);
	// assigned->getBrain().setIdea("CHANGED ASSIGNED", 1);
	
	// std::cout << "\nOriginal idea 0: " << cat->getBrain().getIdea(0) << std::endl;
	
	// std::cout << "Copy idea 0: " << catCopy.getBrain().getIdea(0) << std::endl;
	
	// std::cout << "\nOriginal idea 1: " << cat->getBrain().getIdea(1) << std::endl;
	
	// std::cout << "Assigned idea 1: " << assigned->getBrain().getIdea(1) << std::endl;

	// delete cat;
	// delete assigned;

	// SELF ASSIGNMENT TESTS
	// Cat selfTest;
	// selfTest.getBrain().setIdea("original", 0);
	// selfTest = selfTest;

	// std::cout << "Self-assignment test: " << selfTest.getBrain().getIdea(0) << std::endl;

	// DEEP BRAIN TEST
	// Dog basic;
	// std::cout << std::endl;
	// {
	// 	Dog temp = basic;
	// 	std::cout << "basic Brain address: " << &basic.getBrain() << std::endl;
	// 	std::cout << "tmp Brain address:   " << &temp.getBrain() << std::endl;
	// }
	// std::cout << std::endl;

	//VIRTUAL DESTRUCTOR TEST
	// Animal *animal = new Dog();
	// std::cout << std::endl;

	// delete animal;
	// std::cout << std::endl;

	return 0;
}