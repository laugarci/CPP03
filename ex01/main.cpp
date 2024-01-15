/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:20 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 15:42:49 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"

int main(void)
{
	ScavTrap scav("Scav");
	ClapTrap clap("Clap");

	scav.attack("SCAV");
	clap.attack("CLAP");
}
