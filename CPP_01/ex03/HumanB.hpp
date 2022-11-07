/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* HumanB.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 15:46:14 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:08:11 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		// -Constructor
		HumanB(std::string name);

		// -Destructor
		~HumanB(void);

		// -Setter
		void	setWeapon(Weapon &weapon);
		
		// -Methods
		void	attack(void) const;

	private:
		std::string	_name;
		Weapon	*_weapon;
};

#endif
