/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:35 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/15 15:23:55 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		~ClapTrap();
		ClapTrap(const ClapTrap& old);
		ClapTrap	&operator=(const ClapTrap& claptrap);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
