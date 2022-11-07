/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:54 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 19:03:26 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBit = 8;

// -Constructors
Fixed::Fixed(void) : _rawValue(0) {
	return;
}

Fixed::Fixed(int const value) : _rawValue(value << Fixed::_fractBit) {
	return ;
}

Fixed::Fixed(float const value) : _rawValue(static_cast<int>(roundf(value * (1 << Fixed::_fractBit)))) {
	return ;
}

Fixed::Fixed(Fixed const &rhs) {
	// std::cout << "Copy Constructor called\n"; to check ++X vs X++
	*this = rhs;
	return ;
}

// -Destructor
Fixed::~Fixed(void) {
	return ;
}

// -Operators
Fixed &Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs) {
		this->setRawBits(rhs.getRawBits());
	}
	return (*this);
}

// Comparison Operators
bool Fixed::operator>(Fixed const &rhs) const {
	return (this->_rawValue > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->_rawValue < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->_rawValue >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->_rawValue <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (this->_rawValue == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->_rawValue != rhs.getRawBits());
}

// Arithmetic operators
Fixed Fixed::operator+(Fixed const &rhs) const {
	Fixed temp(this->toFloat() + rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	Fixed temp(this->toFloat() - rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	Fixed temp(this->toFloat() * rhs.toFloat());
	return (temp);
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	Fixed temp(this->toFloat() / rhs.toFloat());
	return (temp);
}

// Prefix increment operator.
// by reference allows: ++++++(value) that is the same as: ++(++(++value))
Fixed &Fixed::operator++(void) {
	++this->_rawValue;
	return (*this);
}

// Postfix increment operator.
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->_rawValue++;
	return (temp);
}

// Prefix decrement operator.
Fixed &Fixed::operator--(void) {
	--this->_rawValue;
	return (*this);
}

// Postfix decrement operator.
Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->_rawValue--;
	return (temp);
}

// Min Max
Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
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
std::ostream &operator<<(std::ostream &out, Fixed const &in) {
	out << in.toFloat();
	return (out);
}
