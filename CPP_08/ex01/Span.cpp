/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Span.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/10 11:52:01 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/26 14:03:52 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Span.hpp"
#include <stdint.h>
#include <climits>

// -Constructors
Span::Span(void) : _vector(std::vector<int>()), _Nint(0){
	return ;
}

Span::Span(const size_t Nmax) : _vector(std::vector<int>()), _Nint(Nmax) {
	return;
}

Span::Span(Span const &rhs) : _vector(std::vector<int>()), _Nint(rhs.getNint()) {
	*this = rhs;
	return ;
}

// -Destructor
Span::~Span(void) {
	return ;
}

// -Operators
Span &Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_vector = rhs.getVector();
		this->_Nint = rhs.getNint();
	}
	return (*this);
}

// -Getters
const std::vector<int> &Span::getVector(void) const {
	return (this->_vector);
}

const size_t &Span::getNint(void) const {
	return (this->_Nint);
}

// -Methods
void Span::addNumber(int number) {
	if (this->_vector.size() == this->_Nint) {
		throw MaxElementsReached();
	}
	else {
		this->_vector.push_back(number);
	}
	return ;
}

size_t Span::shortestSpan(void) {
	std::vector<int>::iterator	it;
	std::vector<int>			tmpVector(this->_vector);
	size_t						minSpan;
	
	if (this->_vector.size() < 2) {
		throw MoreElementsNeeded();
	}
	else {
		minSpan = SIZE_MAX;
		std::sort(tmpVector.begin(), tmpVector.end());
		for (it = tmpVector.begin(); it != tmpVector.end(); it++) {
			if (*(it + 1) != *it) {
				if (static_cast<size_t>(*(it + 1) - *it) < minSpan) {
					minSpan = static_cast<size_t>(*(it + 1) - *it);
				}
			}
		}
	}
	return (minSpan);
}

size_t Span::longestSpan(void) {
	std::vector<int>::iterator max_el;
	std::vector<int>::iterator min_el;

	if (this->_vector.size() < 2) {
		throw MoreElementsNeeded();
	}
	max_el = std::max_element(this->_vector.begin(), this->_vector.end());
	min_el = std::min_element(this->_vector.begin(), this->_vector.end());
	return (*max_el - *min_el);
}

void Span::addMax(int min, int max) {
	int add;

	for (size_t i = this->_vector.size(); i < this->_Nint; i++) {
		add = (int)((reinterpret_cast<uintptr_t>(this) % rand()) % (max + 1 + (-min))) + min;
		this->addNumber(add);
	}
}

// -Execeptions
const char* Span::MaxElementsReached::what(void) const throw() {
	return ("\nCannot add more elements.\n");
}

const char* Span::MoreElementsNeeded::what(void) const throw() {
	return ("\nAdd more elements to make the calculus.\n");
}
