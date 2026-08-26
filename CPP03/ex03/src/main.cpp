/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:29:43 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 15:30:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int	main()
{
	DiamondTrap	bob("bob");
	DiamondTrap	sandy("sandy");

	std::cout << "\n*COPY/ASSIGNMENT TESTS*" << std::endl;
	DiamondTrap	copy(bob);
	DiamondTrap	assigned("assigned");
	assigned = bob;
	
	std::cout << "\nStats" << std::endl;
	std::cout << "bob - HP: " << bob.getHitPoints() 
				  << ", Energy: " << bob.getEnergyPoints() << std::endl;
	std::cout << "sandy - HP: " << sandy.getHitPoints() 
				  << ", Energy: " << sandy.getEnergyPoints() << std::endl;

	std::cout << "\n*ATTACK TESTS*" << std::endl;
	// Bob attacks
	bob.attack("sandy");
	sandy.takeDamage(20);

	std::cout << "\n*HABILITIES*" << std::endl;
	bob.whoAmI();
	sandy.whoAmI();
	bob.guardGate();
	bob.highFivesGuys();

	// std::cout << "\n-- Sandy drains energy --" << std::endl;
	// for (int i = 0; i < 50; i++)
	// 	  sandy.attack("target");
	// std::cout << "Sandy energy: " << sandy.getEnergyPoints() << std::endl;

	// std::cout << "\n-- Sandy tries to attack with no energy --" << std::endl;
	// sandy.attack("target");

	std::cout << "\n*DESTRUCTION*" << std::endl;
	return 0;
}
