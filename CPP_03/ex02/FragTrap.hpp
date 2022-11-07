/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* FragTrap.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 13:13:16 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:53:20 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		// -Constructors
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &rhs);
		
		// -Destructors
		~FragTrap(void);

		// -Operators
		FragTrap &operator=(FragTrap const &rhs);

		// -Methods
		void highFivesGuys(void);
};

#endif
