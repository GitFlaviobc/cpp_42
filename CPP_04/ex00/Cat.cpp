/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:37 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 16:41:22 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"

// -Constructors
Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called\n";
	return ;
}

Cat::Cat(Cat const &rhs) : Animal("Cat") {
	std::cout << "Cat copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
Cat::~Cat(void) {
	std::cout << "Cat Destructor called!\n";
	return ;
}

// -Operators
Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Methods
void Cat::makeSound(void) const {
	std::cout << "Miau\n";
}
