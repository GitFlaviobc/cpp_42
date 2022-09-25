/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* HumanB.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 15:46:14 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:45:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon	*_weapon;
};

#endif
