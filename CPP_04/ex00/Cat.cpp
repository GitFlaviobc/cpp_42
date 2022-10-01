/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:37 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/26 10:14:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called\n";
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called!\n";
	return ;
}

Cat::Cat(Cat const &src) : Animal("Cat") {
	std::cout << "Cat copy constructor called\n";
	*this = src;
	return ;
}

Cat &Cat::operator=(Cat const &src) {
	std::cout << "Cat assignment operator called\n";
	this->_type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miau\n";
}
