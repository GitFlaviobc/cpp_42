/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Animal.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/26 10:13:51 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal Default Constructor called!\n";
	return ;
}

Animal::Animal(std::string const type) : _type(type) {
	std::cout << "Animal string constructor called\n";
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called!\n";
	return ;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called\n";
	*this = src;
	return ;
}

Animal &Animal::operator=(Animal const &src) {
	std::cout << "Animal assignment operator called\n";
	this->_type = src.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Animal const &in) {
	out << in.getType();
	return (out);
}

const std::string &Animal::getType(void) const {
	return (this->_type);
}

void Animal::setType(std::string Type) {
	this->_type = Type;
}

void Animal::makeSound(void) const {
	std::cout << "Aaaaa animal\n";
}
