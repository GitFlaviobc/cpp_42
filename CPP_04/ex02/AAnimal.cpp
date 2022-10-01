/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AAnimal.cpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 14:16:37 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "AAnimal Default Constructor called!\n";
	return ;
}

AAnimal::AAnimal(std::string const type) : _type(type) {
	std::cout << "AAnimal string constructor called\n";
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called!\n";
	return ;
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "AAnimal copy constructor called\n";
	*this = src;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &src) {
	std::cout << "AAnimal assignment operator called\n";
	this->_type = src.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AAnimal const &in) {
	out << in.getType();
	return (out);
}

const std::string &AAnimal::getType(void) const {
	return (this->_type);
}

void AAnimal::setType(std::string Type) {
	this->_type = Type;
}
