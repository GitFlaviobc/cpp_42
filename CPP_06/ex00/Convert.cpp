/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Convert.cpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/07 10:31:20 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/08 17:36:19 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>
#include <string>
#include <sstream>

// -Constructors
Convert::Convert(void) : _input(""), _numberInput(0) {
	return ;
}

Convert::Convert(const std::string input) : _input(input), _numberInput(0) {
	if (input.length() == 1 && std::isalpha(*input.begin()))
		this->_numberInput = static_cast<double>(*input.begin());
	else 
		this->_numberInput = std::strtod(input.c_str(), NULL);
}

Convert::Convert(Convert const &rhs) : _input(""), _numberInput(0) {
	*this = rhs;
	return ;
}

// -Operators
Convert &Convert::operator=(Convert const &rhs) {
	if (this != &rhs) {
		this->_input = rhs.getInput();
		this->_numberInput = rhs.getNumberinput();
	}
	return (*this);
}

// -Destructor
Convert::~Convert(void) {
	return ;
}

// -Getters
const double &Convert::getNumberinput(void) const {
	return (this->_numberInput);
}

const std::string &Convert::getInput(void) const {
	return (this->_input);
}

// -Methods
char Convert::toChar(void) const {
	return (static_cast<char>(this->_numberInput));
}

int Convert::toInt(void) const {
	return (static_cast<int>(this->_numberInput));
}

float Convert::toFloat(void) const {
	return (static_cast<float>(this->_numberInput));
}

double Convert::toDouble(void) const {
	return (static_cast<double>(this->_numberInput));
}

std::string Convert::printChar(void) const {
	std::stringstream	ss;
	char				toPrint;

	toPrint = this->toChar();
	if (toPrint == 0) {
		return ("impossible");
	}
	else if (!std::isprint(toPrint)) {
		return ("Non displayable");
	}
	else {
		ss << "'" << toPrint << "'";
		return (ss.str());
	}
}

std::string Convert::printInt(void) const {
	std::stringstream	ss;
	int					toPrint;

	toPrint = this->toInt();
	if ((this->_input.compare("0") && toPrint == 0) || toPrint == -2147483648) {
		return ("impossible");
	}
	else {
		ss << toPrint;
		return (ss.str());
	}
}

std::string Convert::printFloat(void) const {
	std::stringstream	ss;
	float				toPrint;

	toPrint = this->toFloat();
	if (this->_input.compare("0") && toPrint == 0) {
		return ("impossible");
	}
	else {
		ss << toPrint;
		if (toPrint == static_cast<int>(toPrint))
			ss << ".0";
		ss << "f";
		return (ss.str());
	}
}

std::string Convert::printDouble(void) const {
	std::stringstream	ss;
	double				toPrint;

	toPrint = this->toDouble();
	if (this->_input.compare("0") && toPrint == 0) {
		return ("impossible");
	}
	else {
		ss << toPrint;
		if (toPrint == static_cast<int>(toPrint))
			ss << ".0";
		return (ss.str());
	}
}
