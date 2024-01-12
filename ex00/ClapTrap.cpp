/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:01:28 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/12 13:19:00 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}


ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
}
