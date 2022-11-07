/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:37 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:31:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"

// -Constructors
Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called\n";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &rhs) : AAnimal("Cat") {
	std::cout << "Cat copy constructor called\n";
	this->_brain = new Brain(*rhs.getBrain());
	*this = rhs;
	return ;
}

// -Destructors
Cat::~Cat(void) {
	std::cout << "Cat Destructor called!\n";
	delete this->_brain;
	return ;
}

// -Operators
Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
	}
	return (*this);
}

// -Getters
Brain const *Cat::getBrain(void) const {
	return (this->_brain);
}

// -Methods
void Cat::makeSound(void) const {
	std::cout << "Miau\n";
}
