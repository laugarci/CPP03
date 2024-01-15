/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:01:28 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 16:08:51 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_name = "Undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}


ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap& claptrap )
{
	std::cout << "Copy assigment operator called" << std::endl;
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
