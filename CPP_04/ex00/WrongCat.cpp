/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongCat.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:08 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/28 16:43:39 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called\n";
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor called\n";
	return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat copy constructor called\n";
	*this = src;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &src) {
	std::cout << "WrongCat assigment operator called\n";
	this->_type = src.getType();
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "wrong Sound Animal!\n";
}
