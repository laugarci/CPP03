/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:09:31 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 10:12:49 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Undefined", _ScavHitPoints, _ScavEnergy, _ScavAttack)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, _ScavHitPoints, _ScavEnergy, _ScavAttack)
{
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
	std::cout << "Scav copy assigment operator called" << std::endl;
	this->setName( scavtrap.getName() );
	this->setHitPoints( scavtrap.getHitPoints() );
	this->setEnergyPoints( scavtrap.getEnergyPoints() );
	this->setAttackDamage( scavtrap.getAttackDamage() );
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string name)
{
	if ((int)this->getEnergyPoints() <= 0 || (int)this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << "is dead and he/she can't attack" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << name << " with " << this->getAttackDamage() << " points of damage!" << std::endl;

}
