/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 15:03:38 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"

int main(void)
{
	ScavTrap scav("Scav");
	ClapTrap clap("Clap");

	scav.scavAttack("Clap");
	clap.attack("Scav");
	scav.takeDamage(5);
	scav.takeDamage(5);
	clap.takeDamage(5);
	scav.beRepaired(5);
	clap.beRepaired(5);
	scav.scavAttack("Clap");
	scav.guardGate();
}
