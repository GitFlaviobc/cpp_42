/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:54 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/23 13:10:42 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBit = 8;

Fixed::Fixed(void) : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const value) : _fixedValue(value << Fixed::_fractBit) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

// static_cast<int> equals to (int) but it is more safe
Fixed::Fixed(float const value) : _fixedValue(static_cast<int>(roundf(value * (1 << _fractBit)))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// fixed3 = fixed2 = fixed1;
// fixed3.operator=(fixed2.operator=(fixed1));
Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

// std::cout << "Hello " << "World";
// operator <<( operator <<( std::cout, "Hello" ), "World" );
std::ostream &operator<<(std::ostream &COUT, Fixed const &fixedValue) {
	COUT << fixedValue.toFloat();
	return (COUT);
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw ) {
	this->_fixedValue = raw;
	return ;
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixedValue) / (1 << _fractBit));
}

int Fixed::toInt(void) const {
	return (this->_fixedValue >> _fractBit);
}
