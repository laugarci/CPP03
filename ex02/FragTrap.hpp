/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:11:04 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/16 20:12:07 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class FragTrap: public ClapTrap {
	private:
		static const unsigned int _FragHitPoints;
		static const unsigned int _FragAttack;
		static const unsigned int _FragEnergy;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const ScavTrap& old);
		FragTrap	&operator=(const FragTrap& fragtrap);
		void	highFivesGuys(void);
		void	attack(std::string name);
};

#endif
