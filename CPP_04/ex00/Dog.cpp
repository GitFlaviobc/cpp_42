/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 16:42:23 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Dog.hpp"

// -Constructors
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
	return ;
}

Dog::Dog(Dog const &rhs) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
Dog::~Dog(void) {
	std::cout << "Dog Destructor called!\n";
	return ;
}

// -Operators
Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Methods
void Dog::makeSound(void) const {
	std::cout << "Au\n";
}
