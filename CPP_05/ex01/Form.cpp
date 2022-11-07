/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Form.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 11:53:09 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// -Constructors
Form::Form(void) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0) {
	return ;
}

Form::Form(const std::string name, const int reqGradeSign, const int reqGradeExec) : 
			_name(name), _isSigned(false), _reqGradeSign(reqGradeSign), _reqGradeExec(reqGradeExec) {
	if (this->_reqGradeSign < 1) {
		throw GradeTooHighException();
	}
	if (this->_reqGradeSign > 150) {
		throw GradeTooLowException();
	}
	return ;
}

Form::Form(Form const &rhs) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0) {
	*this = rhs;
	if (rhs.getReqGradeSign() < 1) {
		throw GradeTooHighException();
	}
	if (rhs.getReqGradeSign() > 150) {
		throw GradeTooLowException();
	}
	return ;
}

// -Destructors
Form::~Form(void) {
	return ;
}

// -Operators
Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_isSigned = rhs.getIsSigned();
		const_cast<int&>(this->_reqGradeSign) = rhs.getReqGradeSign();
		const_cast<int&>(this->_reqGradeExec) = rhs.getReqGradeExec();
	}
	return (*this);
}

// -Getters
const std::string &Form::getName(void) const {
	return (this->_name);
}

bool Form::getIsSigned(void) const {
	return (this->_isSigned);
}

int Form::getReqGradeSign(void) const {
	return (this->_reqGradeSign);
}

int Form::getReqGradeExec(void) const {
	return (this->_reqGradeExec);
}

// -Methods
void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= this->_reqGradeSign) {
		this->_isSigned = true;
	}
	if (b.getGrade() > this->_reqGradeSign) {
		throw Form::GradeTooHighException();
	}
}

// -Exceptions
const char *Form::GradeTooHighException::what(void) const throw() {
	return ("Form required Grade is too high!");
}

const char *Form::GradeTooLowException::what(void) const throw() {
	return ("Form required Grade is too low!");
}

// -Functions
std::ostream &operator<<(std::ostream &out, Form const &in) {
	out << "Form: " << in.getName() << "\n";
	out << "Signed: " << std::boolalpha  << in.getIsSigned() << "\n";
	out << "Grade to sign: " << in.getReqGradeSign() << "\n";
	out << "Grade to exec: " << in.getReqGradeExec() << "\n";
	return (out);
}
