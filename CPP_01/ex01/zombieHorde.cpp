/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* zombieHorde.cpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 11:29:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/18 11:40:22 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* Horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		Horde[i].setZombieName(name);
	}
	return (Horde);
}
