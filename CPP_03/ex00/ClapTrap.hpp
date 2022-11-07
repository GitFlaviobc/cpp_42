/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ClapTrap.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/23 08:05:34 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/23 08:05:35 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		// -Constructors
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &rhs);

		// -Destructor
		~ClapTrap(void);

		// -Operators
		ClapTrap &operator=(ClapTrap const &rhs);

		// -Getters
		const int			&getHitpoints(void) const;
		const int			&getEnergypoints(void) const;
		const int			&getAttackdamage(void) const;
		const std::string	&getName(void) const;

		// -Setters
		void	setHitpoints(int hitPoints);
		void	setEnergypoints(int energyPoints);
		void	setAttackdamage(int attackDamage);
		void	setName(std::string name);

		// -Methods
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		std::string	_name;
};

// -Functions
std::ostream &operator<<(std::ostream &out, ClapTrap const &in);

#endif
