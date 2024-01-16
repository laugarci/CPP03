/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:29:04 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 10:23:23 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_attackDamage = 20;
	_hitPoints = 100;
	_energyPoints = 50;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = old;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& scavtrap )
{
	std::cout << "Copy assigment operator called" << std::endl;
	return (*this);
	(void)scavtrap;
}

void	ScavTrap::guardGate()
{
	std::cout << "CrapTrap is now in keeper mode" << std::endl;
}

void	ScavTrap::scavAttack(std::string name)
{
	std::cout << "ScavTrap attacks " << name << " with " << this->_attackDamage << " points of damage!" << std::endl;
}
