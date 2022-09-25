/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* HumanB.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 16:49:29 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:45:49 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return;
}

HumanB::~HumanB(void) {
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
