/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ScavTrap.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 09:10:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:50:19 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		// -Constructors
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &rhs);

		// -Destructors
		~ScavTrap(void);

		// -Operators
		ScavTrap &operator=(ScavTrap const &rhs);

		// -Methods
		void	attack(const std::string &target);
		void	guardGate(void) const;
};

#endif
