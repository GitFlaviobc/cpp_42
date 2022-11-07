/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Animal.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 16:38:44 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Animal.hpp"

// -Constructors
Animal::Animal(void) {
	std::cout << "Animal Default Constructor called!\n";
	return ;
}

Animal::Animal(std::string const type) : _type(type) {
	std::cout << "Animal string constructor called\n";
}

Animal::Animal(Animal const &rhs) {
	std::cout << "Animal copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
Animal::~Animal(void) {
	std::cout << "Animal Destructor called!\n";
	return ;
}

// -Operators
Animal &Animal::operator=(Animal const &rhs) {
	std::cout << "Animal assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Getters
const std::string &Animal::getType(void) const {
	return (this->_type);
}

// -Setters
void Animal::setType(std::string Type) {
	this->_type = Type;
}

// -Methods
void Animal::makeSound(void) const {
	std::cout << "Aaaaa animal\n";
}

// -Functions
std::ostream &operator<<(std::ostream &out, Animal const &in) {
	out << in.getType();
	return (out);
}
