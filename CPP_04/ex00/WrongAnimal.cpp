/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongAnimal.cpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:00 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 16:47:24 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "WrongAnimal.hpp"

// -Constructors
WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called\n";
	return ;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type) {
	std::cout << "WrongAnimal string constructor called\n";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called\n";
	return ;
}

// -Operators
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "WrongAnimal assigment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Getters
const std::string &WrongAnimal::getType(void) const {
	return (this->_type);
}

// -Setters
void WrongAnimal::setType(std::string Type) {
	this->_type = Type;
}

// -Methods
void WrongAnimal::makeSound(void) const {
	std::cout << "wrong Sound Animal!\n";
}

// -Functions
std::ostream &operator<<(std::ostream &out, WrongAnimal const &in) {
	out << in.getType();
	return (out);
}
