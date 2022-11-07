/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Zombie.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:27 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:02:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Zombie.hpp"

// -Constructor
Zombie::Zombie(void) {
	return;
}

// -Destructor
Zombie::~Zombie(void) {
	std::cout << "Zombie: " << this->_name << " was destroyed!" << std::endl;
	return ;
}

// -Setter
void Zombie::setZombieName(std::string name) {
	this->_name = name;
	return ;
}

// -Methods
void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
