/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:01:28 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 09:52:58 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	_name = "Undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}


ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
{
	std::cout << "ClapTrap heritage constructor called" << std::endl;
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = old;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap& claptrap )
{
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
	if (this != &claptrap)
	{
		this->_name = claptrap._name;
		this->_hitPoints = claptrap._hitPoints;
		this->_energyPoints = claptrap._energyPoints;
		this->_attackDamage = claptrap._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if ((int)this->_energyPoints <= 0 || (int)this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and he/she can't attack" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << "Amount must be positive" << std::endl;
		return ;
	}
	if ((int)this->_energyPoints <= 0 || (int)this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and he/she can't take more damage" << std::endl;
			return ;
	}
	std::cout << this->_name << " take " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << "Amount must be positive" << std::endl;
		return ;
	}
	if ((int)this->_energyPoints <= 0 || (int)this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and he/she can't be repaired" << std::endl;
		return ;
	}
	std::cout << this->_name << " has regained " << amount << " hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage;
}
