/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Zombie.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:29 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:01:42 by Flavio BC       ###        #########   ########          */
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
		Zombie(void);

		// -Destructor
		~Zombie(void);

		// -Setter
		void	setZombieName(std::string name);

		// -Methods
		void	announce(void);

	private:
		std::string	_name;
};

// -Function
Zombie* zombieHorde( int N, std::string name );

#endif
