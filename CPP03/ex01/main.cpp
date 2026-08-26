/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:29:43 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 11:28:54 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	std::cout << "*CONSTRUCTOR TESTS*" << std::endl;
	ClapTrap	bob("bob");
	ClapTrap	jerry("jerry");
	ScavTrap	squid("squid");

	std::cout << "\n*COPY AND ASSIGNMENT*" << std::endl;
	ScavTrap	squidB(squid);
	ScavTrap	pearl;

	pearl = squid;

	std::cout << "\n--- Object Info ---" << std::endl;
	std::cout << bob.getName() << " - HP: " << bob.getHitPoints() 
			  << ", Energy: " << bob.getEnergyPoints() << std::endl;
	std::cout << jerry.getName() << " - HP: " << jerry.getHitPoints() 
			  << ", Energy: " << jerry.getEnergyPoints() << std::endl;
	std::cout << squid.getName() << " - HP: " << squid.getHitPoints() 
			  << ", Energy: " << squid.getEnergyPoints() << std::endl;
	std::cout << squidB.getName() << " - HP: " << squidB.getHitPoints() 
			  << ", Energy: " << squidB.getEnergyPoints() << std::endl;
	std::cout << pearl.getName() << " - HP: " << pearl.getHitPoints() 
			  << ", Energy: " << pearl.getEnergyPoints() << std::endl;

	std::cout << "\n*COMBAT TESTS*" << std::endl;
	//Bob attacks Jerry
	bob.attack("jerry");
	//Jerry takes damage
	jerry.takeDamage(5);
	//Squid attacks bob
	squid.attack("bob");
	//Bob takes damage
	bob.takeDamage(15);
	
	std::cout << "\n-- Squid guards, heals then takes damage --" << std::endl;
	squid.guardGate();
	squid.beRepaired(10);
	squid.takeDamage(1200);

	std::cout << "\n-- Squid tries to repair while dead --" << std::endl;
	squid.beRepaired(5);

	std::cout << "\n*DESTRUCTION*" << std::endl;
	return 0;
}
