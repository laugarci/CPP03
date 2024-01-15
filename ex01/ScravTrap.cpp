/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:29:04 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 16:08:53 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_attackDamage = 100;
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
