/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongAnimal.cpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:00 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/28 16:43:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called\n";
	return ;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type) {
	std::cout << "WrongAnimal string constructor called\n";
	return ;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called\n";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = src;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src) {
	std::cout << "WrongAnimal assigment operator called\n";
	this->_type = src.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, WrongAnimal const &in) {
	out << in.getType();
	return (out);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "wrong Sound Animal!\n";
}

const std::string &WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::setType(std::string Type) {
	this->_type = Type;
}
