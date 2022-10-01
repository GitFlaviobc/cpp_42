/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 13:54:21 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called!\n";
	delete this->_brain;
	return ;
}

Dog::Dog(Dog const &src) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	this->_brain = new Brain(*src.getBrain());
	*this = src;
	return ;
}

Dog &Dog::operator=(Dog const &src) {
	std::cout << "Dog assignment operator called\n";
	this->_type = src.getType();
	*this->_brain = *src.getBrain();
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Au\n";
}

Brain const *Dog::getBrain(void) const {
	return (this->_brain);
}
