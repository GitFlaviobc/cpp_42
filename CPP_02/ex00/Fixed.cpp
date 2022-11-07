/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/21 18:18:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 16:59:31 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBit = 8;

// -Constructors
Fixed::Fixed(void) : _rawValue(0) {
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(Fixed const &rhs) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructor
Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return ;
}

// -Operators
Fixed &Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs) {
		std::cout << "Copy assignment operator called\n";
		this->setRawBits(rhs.getRawBits());
	}
	return (*this);
}

// -Getters
int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return (this->_rawValue);
}

// -Setters
void	Fixed::setRawBits(int const raw ) {
	this->_rawValue = raw;
	return ;
}
