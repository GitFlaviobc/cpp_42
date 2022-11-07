/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:30:53 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Dog.hpp"

// -Constructors
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &rhs) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	this->_brain = new Brain(*rhs.getBrain());
	*this = rhs;
	return ;
}

// -Destructors
Dog::~Dog(void) {
	std::cout << "Dog Destructor called!\n";
	delete this->_brain;
	return ;
}

// -Operators
Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
	}
	return (*this);
}

// -Getters
Brain const *Dog::getBrain(void) const {
	return (this->_brain);
}

// -Methods
void Dog::makeSound(void) const {
	std::cout << "Au\n";
}
