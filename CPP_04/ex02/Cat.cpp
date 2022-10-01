/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.cpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:37 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 14:26:25 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called\n";
	this->_brain = new Brain();
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called!\n";
	delete this->_brain;
	return ;
}

Cat::Cat(Cat const &src) : AAnimal("Cat") {
	std::cout << "Cat copy constructor called\n";
	this->_brain = new Brain(*src.getBrain());
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

Brain const *Cat::getBrain(void) const {
	return (this->_brain);
}
