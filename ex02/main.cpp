/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 10:35:30 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	std::cout << BGRED"[ ATTACK TEST ]" RESET<< std::endl;
	scav.attack("Clap");
	clap.attack("Frag");
	frag.attack("Scav");

	std::cout << BGRED"[ TAKE DAMAGE TEST ]" RESET<< std::endl;
	scav.takeDamage(5);
	scav.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(10);
	scav.takeDamage(100);
	frag.takeDamage(60);

	std::cout << BGRED"[ BE REPAIRED TEST ]" RESET<< std::endl;
	scav.beRepaired(5);
	clap.beRepaired(5);
	frag.beRepaired(30);
	
	std::cout << BGRED"[ GUARD GATE TEST ]" RESET<< std::endl;
	scav.guardGate();
//	frag.guardGate();
//	clap.guardGate();

	std::cout << BGRED"[ GIVE ME FIVE TEST ]" RESET<< std::endl;
	frag.highFivesGuys();
//	scav.highFivesGuys();
//	clap.highFivesGuys();
}
