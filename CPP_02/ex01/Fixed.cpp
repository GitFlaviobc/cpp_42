/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:54 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 17:00:02 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBit = 8;

// -Constructors
Fixed::Fixed(void) : _rawValue(0) {
	std::cout << "Default constructor called\n";
	return;
}

Fixed::Fixed(int const value) : _rawValue(value << Fixed::_fractBit) {
	std::cout << "Int constructor called\n";
	return ;
}

// static_cast<int> equals to (int) but it is more safe
Fixed::Fixed(float const value) : _rawValue(static_cast<int>(roundf(value * (1 << _fractBit)))) {
	std::cout << "Float constructor called\n";
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
// fixed3 = fixed2 = fixed1;
// fixed3.operator=(fixed2.operator=(fixed1));
Fixed &Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs) {
		std::cout << "Copy assignment operator called\n";
		this->setRawBits(rhs.getRawBits());
	}
	return (*this);
}

// -Getters
int	Fixed::getRawBits( void ) const {
	return (this->_rawValue);
}

// -Setters
void	Fixed::setRawBits(int const raw ) {
	this->_rawValue = raw;
	return ;
}

// -Methods
float Fixed::toFloat(void) const {
	return (static_cast<float>(this->_rawValue) / (1 << _fractBit));
}

int Fixed::toInt(void) const {
	return (this->_rawValue >> _fractBit);
}

// -Functions
// std::cout << "Hello " << "World";
// operator <<( operator <<( std::cout, "Hello" ), "World" );
std::ostream &operator<<(std::ostream &out, Fixed const &in) {
	out << in.toFloat();
	return (out);
}
