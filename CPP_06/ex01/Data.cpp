/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Data.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/08 19:08:22 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/26 10:22:34 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Data.hpp"

// -Constructors
Data::Data(void) : _value("") {
	return ;
}

Data::Data(const std::string value) : _value(value) {
	return ;
}

Data::Data(Data const &rhs) {
	*this = rhs;
	return ;
}

// -Destructor
Data::~Data(void) {
	return ;
}

// -Operators
Data &Data::operator=(Data const &rhs) {
	if (this != &rhs) {
		this->_value = rhs.getValue();
	}
	return (*this);
}

// -Getters
const std::string &Data::getValue(void) const {
	return (this->_value);
}

// -Functions
uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
