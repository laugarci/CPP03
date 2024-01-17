/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:11:04 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 11:35:47 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class FragTrap: public ClapTrap {
	private:
		static const unsigned int _FragHitPoints = 100;
		static const unsigned int _FragAttack = 30;
		static const unsigned int _FragEnergy = 100;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& old);
		FragTrap	&operator=(const FragTrap& fragtrap);
		void	highFivesGuys(void);
		void	attack(std::string name);
};

#endif
