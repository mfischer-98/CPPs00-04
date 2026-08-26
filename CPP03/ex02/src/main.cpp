/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:29:43 by mefische          #+#    #+#             */
/*   Updated: 2026/08/26 14:17:25 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main()
{
	std::cout << "*CONSTRUCTOR TESTS*" << std::endl;
	ClapTrap	bob("bob");
	ScavTrap	squid("squid");
	FragTrap	sandy("sandy");

	std::cout << "\n*COPY AND ASSIGNMENT*" << std::endl;
	FragTrap	sandyB(sandy);
	FragTrap	pearl;
	pearl = sandy;

	std::cout << "\n--- Object Info ---" << std::endl;
	std::cout << bob.getName() << " - HP: " << bob.getHitPoints() 
			  << ", Energy: " << bob.getEnergyPoints() << std::endl;
	std::cout << squid.getName() << " - HP: " << squid.getHitPoints() 
			  << ", Energy: " << squid.getEnergyPoints() << std::endl;
	std::cout << pearl.getName() << " - HP: " << pearl.getHitPoints() 
			  << ", Energy: " << pearl.getEnergyPoints() << std::endl;
	std::cout << sandy.getName() << " - HP: " << sandy.getHitPoints() 
			  << ", Energy: " << sandy.getEnergyPoints() << std::endl;
	std::cout << sandyB.getName() << " - HP: " << sandyB.getHitPoints() 
			  << ", Energy: " << sandyB.getEnergyPoints() << std::endl;

	std::cout << "\n*COMBAT TESTS*" << std::endl;
	//Bob attacks Jerry
	bob.attack("squid");
	squid.takeDamage(5);

	//Squid attacks Bob
	squid.attack("bob");
	bob.takeDamage(15);

	//sandy attacks with 30 damage
	sandy.attack("squid");
	squid.takeDamage(12);

	//Fragtrap high five
	sandy.highFivesGuys();

	std::cout << "\n*DESTRUCTION*" << std::endl;
	return 0;
}