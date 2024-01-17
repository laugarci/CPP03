/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 09:51:13 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	/*Objects*/
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	ScavTrap scavNoname;
	ClapTrap clapNoname;
	FragTrap fragNoname;

	/*Attack*/
	scav.attack("Clap");
	clap.attack("Frag");
	frag.attack("Scav");


	/*Take damage*/
	scav.takeDamage(5);
	scav.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(10);
	scav.takeDamage(100);
	frag.takeDamage(60);

	/*Be repaired*/
	scav.beRepaired(5);
	clap.beRepaired(5);
	frag.beRepaired(30);
	
	/*Guard gate (just scav)*/
	scav.guardGate();
//	frag.guardGate();
//	clap.guardGate();

	/*Give me five (just frag)*/
	frag.highFivesGuys();
//	scav.highFivesGuys();
//	clap.highFivesGuys();
}
