/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Bureaucrat.cpp                                        :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/01 19:09:30 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 11:40:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Bureaucrat.hpp"

// -Constructors
Bureaucrat::Bureaucrat(void) : _name(""), _grade(1) {
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1) {
		throw GradeTooHighException();
	}
	if (this->_grade > 150) {
		throw GradeTooLowException();
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) {
	*this = rhs;
	if (rhs.getGrade() < 1) {
		throw GradeTooHighException();
	}
	if (rhs.getGrade() > 150) {
		throw GradeTooLowException();
	}
	return ;
}

// -Destructors
Bureaucrat::~Bureaucrat(void) {
	return ;
}

// -Operators
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

// -Getters
const int &Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

// -Setters
const std::string &Bureaucrat::getName(void) const {
	return (this->_name);
}

// -Methods
void Bureaucrat::incrementGrade(void) {
	if ((this->_grade - 1) < 1) {
		throw GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decrementGrade(void) {
	if ((this->_grade + 1) > 150) {
		throw GradeTooLowException();
	}
	this->_grade++;
}

// -Exceptions
const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Invalid Bureaucrat Grade, to high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Invalid Bureaucrat Grade, to low!");
}

// -Functions
std::ostream &operator<<(std::ostream &out, Bureaucrat const &in) {
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << ".\n";
	return (out);
}
