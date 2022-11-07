/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* HumanA.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 15:46:20 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:06:34 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		// -Constructor
		HumanA(std::string name, Weapon &weapon);

		// -Destructor
		~HumanA(void);

		// -Methods
		void	attack(void) const;

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
