/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 10:07:24 by laugarci         ###   ########.fr       */
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

	std::cout << BGRED"[ ATTACK TEST ]" RESET<< std::endl;
	scav.attack("Clap");
	clap.attack("Frag");

	std::cout << BGRED"[ TAKE DAMAGE TEST ]" RESET<< std::endl;
	scav.takeDamage(5);
	clap.takeDamage(1);
	clap.takeDamage(5);
	scav.takeDamage(100);
	scav.takeDamage(100);

	std::cout << BGRED"[ BE REPAIRED TEST ]" RESET<< std::endl;
	scav.beRepaired(5);
	clap.beRepaired(5);

	std::cout << BGRED"[ GUARD GATE TEST ]" RESET<< std::endl;
	scav.guardGate();
//	clap.guardGate();

}
