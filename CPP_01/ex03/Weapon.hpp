/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Weapon.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 15:49:18 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/18 16:52:57 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string	&getType(void) const;
		void	setType(std::string type);
	private:
		std::string _type;
};

#endif
