/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AAnimal.cpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:18:18 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "AAnimal.hpp"

// -Constructors
AAnimal::AAnimal(void) {
	std::cout << "AAnimal Default Constructor called!\n";
	return ;
}

AAnimal::AAnimal(std::string const type) : _type(type) {
	std::cout << "AAnimal string constructor called\n";
}

AAnimal::AAnimal(AAnimal const &rhs) {
	std::cout << "AAnimal copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called!\n";
	return ;
}

// -Operators
AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	std::cout << "AAnimal assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

// -Getters
const std::string &AAnimal::getType(void) const {
	return (this->_type);
}

// -Setters
void AAnimal::setType(std::string Type) {
	this->_type = Type;
}

// -Functions
std::ostream &operator<<(std::ostream &out, AAnimal const &in) {
	out << in.getType();
	return (out);
}
