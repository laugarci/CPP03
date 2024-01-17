/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:09:43 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 11:34:42 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap: public ClapTrap {
	private:
		static const unsigned int _ScavHitPoints = 100;
		static const unsigned int _ScavAttack = 20;
		static const unsigned int _ScavEnergy = 50;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& old);
		ScavTrap	&operator=(const ScavTrap& Scavtrap);
		void	guardGate();
		void	scavAttack(std::string name);
};

#endif
