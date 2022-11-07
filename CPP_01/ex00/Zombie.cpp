/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Zombie.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:27 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 09:58:38 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Zombie.hpp"

// -Constructor
Zombie::Zombie(std::string name) : _name(name) {
	return;
}

// -Desstructor
Zombie::~Zombie(void) {
	std::cout << "Zombie: " << this->_name << " was destroyed!" << std::endl;
	return ;
}

// -Methods
void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
