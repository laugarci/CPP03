/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 20:16:15 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap scav("Scav");
	ClapTrap clap("Clap");

	scav.attack("Clap");
	clap.attack("Scav");
	scav.takeDamage(5);
	scav.takeDamage(5);
	clap.takeDamage(5);
	scav.beRepaired(5);
	clap.beRepaired(5);
	scav.attack("Clap");
	scav.guardGate();
}
