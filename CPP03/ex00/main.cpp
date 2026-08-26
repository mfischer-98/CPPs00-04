/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:29:43 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 10:50:37 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "*DEFAULT CONSTRUCTOR TEST*" << std::endl;
	ClapTrap	defaultTrap;

	std::cout << "\n*NAMED CONSTRUCTOR*" << std::endl;
	ClapTrap	bob("bob");
	ClapTrap	patrick("patrick");
	ClapTrap	plankton("plankton");

	std::cout << "\n*COPY TEST*" << std::endl;
	ClapTrap	planktonB("plankton");

	std::cout << "\n*ASSIGNMENT OPERATOR TEST*" << std::endl;
	planktonB = bob;

	std::cout << "\n--- Object Info ---" << std::endl;
	std::cout << defaultTrap.getName() << " at " << &defaultTrap << std::endl;
	std::cout << bob.getName() << " at " << &bob << std::endl;
	std::cout << patrick.getName() << " at " << &patrick << std::endl;
	std::cout << plankton.getName() << " at " << &plankton << std::endl;
	std::cout << planktonB.getName() << " at " << &plankton << std::endl;

	std::cout << "\n*ACTION TESTS*" << std::endl;
	std::cout << "-- Bob attacks --" << std::endl;
	bob.attack("patrick");

	std::cout << "\n-- Patrick takes damage --" << std::endl;
	patrick.takeDamage(5);
	std::cout << "Patrick's hit points: " << patrick.getHitPoints() << std::endl;
	patrick.takeDamage(20);
	std::cout << "Patrick's hit points: " << patrick.getHitPoints() << std::endl;

	std::cout << "\n-- Patrick tries to act while dead --" << std::endl;
	patrick.attack("bob");
	patrick.beRepaired(5);

	std::cout << "\n-- Bob repairs himself --" << std::endl;
	bob.beRepaired(5);

	std::cout << "\n-- Bob drains all energy --" << std::endl;
	for (int i = 0; i < 9; i++)
		bob.beRepaired(1);
	std::cout << "Bob's energy: " << bob.getEnergyPoints() << std::endl;
		
	std::cout << "\n-- Bob tries to act with no energy --" << std::endl;
	bob.attack("patrick");
	bob.beRepaired(5);

	std::cout << "\n*DESTRUCTORS*" << std::endl;
	return 0;
}