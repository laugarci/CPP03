/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:13:26 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 15:17:10 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragClap.hpp"

const unsigned int FragClap::_FragHitPoints = 100;
const unsigned int FragClap::_FragAttack = 30;
const unsigned int FragClap::_FragEnergy = 100;

FragTrap::FragTrap(std::string name) : ClapTrap(name, _FragHitPoints, _FragEnergy, _FragAttack)
{
	std::cout << "FragClap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


