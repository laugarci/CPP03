/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 09:43:43 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	ClapTrap c ( a );
	ClapTrap d ("D");

	std::cout << BGRED"[ TAKE DAMAGE TEST ]" RESET<< std::endl;
	d.takeDamage(0);
	c.takeDamage(8);
	c.takeDamage(6);
	c.takeDamage(2);
	c.takeDamage(5);
	a.takeDamage(3);
	b = c;
	b.takeDamage(1);
	b.takeDamage(-5);

std::cout << BGRED"[ ATTACK TEST ]" RESET<< std::endl;	
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");
	d.attack("A");

	std::cout << BGRED"[ BE REPAIRED TEST ]" RESET<< std::endl;
	d.beRepaired(10);
	a.beRepaired(5);
	a.beRepaired(-5);

}
