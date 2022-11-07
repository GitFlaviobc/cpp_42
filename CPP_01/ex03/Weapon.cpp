/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Weapon.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 16:51:15 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 10:06:00 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Weapon.hpp"

// -Constructor
Weapon::Weapon(std::string type) : _type(type) {
	return;
}

// -Destructor
Weapon::~Weapon(void) {
	return ;
}

// -Getter
const std::string &Weapon::getType(void) const {
	return (this->_type);
}

// -Setter
void Weapon::setType(std::string type) {
	this->_type = type;
}
