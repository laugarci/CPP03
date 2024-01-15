/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:08:54 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 16:08:55 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap: public ClapTrap {
	private:
		std::string	_name;
	//	unsigned int _hitPoints;
	//	unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& old);
		ScavTrap	&operator=(const ScavTrap& Scavtrap);
		void	guardGate();
};

#endif
