/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 11:07:50 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
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

}
