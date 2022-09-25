/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ClapTrap.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/23 19:23:21 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/24 19:25:59 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &src);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const int	&getHitpoints(void) const;
		void		setHitpoints(int hitPoints);
		const int	&getEnergypoints(void) const;
		void		setEnergypoints(int energyPoints);
		const int	&getAttackdamage(void) const;
		void		setAttackdamage(int attackDamage);
		const std::string	&getName(void) const;
		void		setName(std::string name);
		const std::string	&getClassname(void) const;
		void		setClassname(std::string className);

	protected:
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
		std::string	_name;
		std::string	_className;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &in);

#endif