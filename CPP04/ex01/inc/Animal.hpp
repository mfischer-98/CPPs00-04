/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:29:50 by mefische          #+#    #+#             */
/*   Updated: 2026/08/28 09:55:39 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal {
	private:
		std::string	_type;
	public:
		Animal();
		Animal(const std::string& animalType);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		
		void		setType(std::string animalType);
		std::string	getType() const;
		void		virtual makeSound() const;
};

#endif