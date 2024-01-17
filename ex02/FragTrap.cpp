/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:13:26 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 09:53:24 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const unsigned int FragTrap::_FragHitPoints = 100;
const unsigned int FragTrap::_FragAttack = 30;
const unsigned int FragTrap::_FragEnergy = 100;

FragTrap::FragTrap() : ClapTrap("Undefined", _FragHitPoints, _FragEnergy, _FragAttack)
{
	std::cout << "FragClap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, _FragHitPoints, _FragEnergy, _FragAttack)
{
	std::cout << "FragClap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = old;
}

FragTrap	&FragTrap::operator=(const FragTrap& fragtrap)
{
	std::cout << "FragTrap	copy assgiment operator called" << std::endl;
	if (this != &fragtrap)
	{
		this->setName(fragtrap.getName());
		this->setHitPoints(fragtrap.getHitPoints());
		this->setEnergyPoints(fragtrap.getEnergyPoints());
		this->setAttackDamage(fragtrap.getAttackDamage());
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey, i'm " << this->getName() << ". Give me five!" << std::endl;
}

void	FragTrap::attack(std::string name)
{
		if ((int)this->getEnergyPoints() <= 0 || (int)this->getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << "is dead and he/she can't attack" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "FragTrap attacks " << name << " with " << this->getAttackDamage() << " points of damage!" << std::endl;
}
