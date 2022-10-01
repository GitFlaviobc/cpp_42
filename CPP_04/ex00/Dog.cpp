/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/26 11:08:36 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called!\n";
	return ;
}

Dog::Dog(Dog const &src) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	*this = src;
	return ;
}

Dog &Dog::operator=(Dog const &src) {
	std::cout << "Dog assignment operator called\n";
	this->_type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Au\n";
}
