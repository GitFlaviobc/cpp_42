/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AForm.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 07:35:40 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "AForm.hpp"

// -Constructors
AForm::AForm(void) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0), _target("") {
	return ;
}

AForm::AForm(const std::string name, const int reqGradeSign, const int reqGradeExec) : 
			_name(name), _isSigned(false), _reqGradeSign(reqGradeSign), _reqGradeExec(reqGradeExec), _target("") {
	if (this->_reqGradeSign < 1) {
		throw GradeTooHighException();
	}
	if (this->_reqGradeSign > 150) {
		throw GradeTooLowException();
	}
	return ;
}

AForm::AForm(AForm const &rhs) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0) {
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
AForm::~AForm(void) {
	return ;
}

// -Operators
AForm &AForm::operator=(AForm const &rhs) {
	if (this != &rhs) {
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_isSigned = rhs.getIsSigned();
		const_cast<int&>(this->_reqGradeSign) = rhs.getReqGradeSign();
		const_cast<int&>(this->_reqGradeExec) = rhs.getReqGradeExec();
		const_cast<std::string&>(this->_target) = rhs.getTarget();
	}
	return (*this);
}

// -Getters
const std::string &AForm::getName(void) const {
	return (this->_name);
}

bool AForm::getIsSigned(void) const {
	return (this->_isSigned);
}

int AForm::getReqGradeSign(void) const {
	return (this->_reqGradeSign);
}

int AForm::getReqGradeExec(void) const {
	return (this->_reqGradeExec);
}

const std::string &AForm::getTarget(void) const {
	return (this->_target);
}

// -Setters
void AForm::setTarget(std::string Target) {
	const_cast<std::string&>(this->_target) = Target;
}

// -Methods
void AForm::beSigned(const class Bureaucrat &b) {
	if (b.getGrade() <= this->_reqGradeSign) {
		this->_isSigned = true;
	}
	if (b.getGrade() > this->_reqGradeSign) {
		throw AForm::GradeTooHighException();
	}
}

// -Exceptions
const char *AForm::GradeTooHighException::what(void) const throw() {
	return ("Form required Grade is too high!");
}

const char *AForm::GradeTooLowException::what(void) const throw() {
	return ("Form required Grade is too low!");
}

const char* AForm::FileOutputException::what(void) const throw() {
	return ("Cannot write the file output!");
}

const char* AForm::UnsignedFormException::what(void) const throw() {
	return ("Form is not signed!");
}

// -Functions
std::ostream &operator<<(std::ostream &out, AForm const &in) {
	out << "Form: " << in.getName() << "\n";
	out << "Signed: " << std::boolalpha  << in.getIsSigned() << "\n";
	out << "Grade to sign: " << in.getReqGradeSign() << "\n";
	out << "Grade to exec: " << in.getReqGradeExec() << "\n";
	return (out);
}
