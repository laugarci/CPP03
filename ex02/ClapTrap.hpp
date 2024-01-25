/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:35 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 10:22:26 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RESET "\x1B[0m"
#define BGRED "\x1B[41m"

class ClapTrap {
	protected:
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
		int		getHitPoints (void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
		std::string getName(void) const;
		void	setName(std::string name);
		void	setHitPoints(unsigned int hitPoints);
		void	setEnergyPoints(unsigned int energyPoints);
		void	setAttackDamage(unsigned int attackDamage);

};

#endif
