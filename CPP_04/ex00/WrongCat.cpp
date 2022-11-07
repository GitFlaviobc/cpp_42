/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongCat.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:08 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:41:18 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "WrongCat.hpp"

// -Constructors
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called\n";
	return ;
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor called\n";
	return ;
}

// -Operators
WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	std::cout << "WrongCat assigment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Methods
void WrongCat::makeSound(void) const {
	std::cout << "wrong Sound Animal!\n";
}
