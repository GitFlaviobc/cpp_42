/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Zombie.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:29 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 08:42:55 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		// -Constructor
		Zombie(std::string name);

		// -Desstructor
		~Zombie(void);

		// -Methods
		void	announce(void);

	private:
		std::string	_name;
};

// -Function
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
