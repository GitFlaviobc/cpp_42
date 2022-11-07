/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Weapon.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 15:49:18 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:05:15 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon {
	public:
		// -Constructor
		Weapon(std::string type);

		// -Destructor
		~Weapon(void);

		// -Getter
		const std::string	&getType(void) const;

		// -Setter
		void	setType(std::string type);

	private:
		std::string	_type;
};

#endif
