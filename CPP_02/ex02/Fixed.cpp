/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:54 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:49:21 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBit = 8;

Fixed::Fixed(void) : _fixedValue(0) {
	return;
}

Fixed::Fixed(int const value) : _fixedValue(value << Fixed::_fractBit) {
	return ;
}

Fixed::Fixed(float const value) : _fixedValue(static_cast<int>(roundf(value * (1 << Fixed::_fractBit)))) {
	return ;
}

Fixed::~Fixed(void) {
	return ;
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
	return ;
}

Fixed &Fixed::operator=(Fixed const &src) {
	this->setRawBits(src.getRawBits());
	return (*this);
}

// Comparison Operators
bool Fixed::operator>(Fixed const &rhs) const {
	return (this->_fixedValue > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->_fixedValue < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->_fixedValue >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->_fixedValue <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (this->_fixedValue == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->_fixedValue != rhs.getRawBits());
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
Fixed &Fixed::operator++(void) {
	++this->_fixedValue;
	return (*this);
}

// Postfix increment operator.
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->_fixedValue++;
	return (temp);
}

// Prefix decrement operator.
Fixed &Fixed::operator--(void) {
	--this->_fixedValue;
	return (*this);
}

// Postfix decrement operator.
Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->_fixedValue--;
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

// Getter and Setters
int	Fixed::getRawBits( void ) const {
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw ) {
	this->_fixedValue = raw;
	return ;
}

// Tranformers
float Fixed::toFloat(void) const {
  return (static_cast<float>(this->_fixedValue) / (1 << _fractBit));
}

int Fixed::toInt(void) const {
  return (this->_fixedValue >> _fractBit);
}

// Other functions
std::ostream &operator<<(std::ostream &out, Fixed const &in) {
	out << in.toFloat();
	return (out);
}