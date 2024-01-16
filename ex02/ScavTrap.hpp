/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:09:43 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 15:12:46 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap: public ClapTrap {
	private:
		static const unsigned int _ScavHitPoints;
		static const unsigned int _ScavAttack;
		static const unsigned int _ScavEnergy;
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
