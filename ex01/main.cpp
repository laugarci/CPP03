/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 10:23:21 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"

int main(void)
{
	ScavTrap scav("Scav");
	ClapTrap clap("Clap");

	scav.scavAttack("SCAV");
	clap.attack("CLAP");

		ClapTrap a("A");
	ClapTrap b("B");
	ClapTrap c ( a );
	ClapTrap d ("D");

	/*Take Damage test*/
	c.takeDamage(8);
	c.takeDamage(6);
	c.takeDamage(2);
	c.takeDamage(5);
	b = c;
	b.takeDamage(1);
	b.takeDamage(-5);

	/*Attack test*/
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

	/*be repaired test*/
	d.beRepaired(10);
	a.beRepaired(5);
	a.beRepaired(-5);

	ScavTrap e("E");
	ScavTrap f("F");
	ScavTrap g ( e );
	ScavTrap h ("H");

	/*Take Damage test*/
	e.takeDamage(8);
	e.takeDamage(6);
	e.takeDamage(2);
	e.takeDamage(5);
	f = e;
	f.takeDamage(1);
	f.takeDamage(-5);

	/*Attack test*/
	g.scavAttack("A");
	g.scavAttack("A");
	g.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");
	h.scavAttack("A");

	/*be repaired test*/
	d.beRepaired(10);
	a.beRepaired(5);
	a.beRepaired(-5);
}
