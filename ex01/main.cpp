/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 11:17:15 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	/*Objects*/
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");

	ScavTrap scavNoname;
	ClapTrap clapNoname;

	/*Attack*/
	scav.attack("Clap");
	clap.attack("Frag");


	/*Take damage*/
	scav.takeDamage(5);
	scav.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(10);
	scav.takeDamage(100);

	/*Be repaired*/
	scav.beRepaired(5);
	clap.beRepaired(5);

	/*Guard gate (just scav)*/
	scav.guardGate();
//	clap.guardGate();

}
