/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AForm.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:42 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 09:31:12 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "AForm.hpp"

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

AForm::AForm(void) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0), _target("") {
	return ;
}

AForm::AForm(	const std::string name,
			const int reqGradeSign,
			const int reqGradeExec) :	_name(name),
										_isSigned(false),
										_reqGradeSign(reqGradeSign),
										_reqGradeExec(reqGradeExec),
										_target("") {
	if (this->_reqGradeSign < 1 || this->_reqGradeExec < 1) {
		throw GradeTooHighException();
	}
	if (this->_reqGradeSign > 150 || this->_reqGradeExec > 150) {
		throw GradeTooLowException();
	}
	return ;
}

AForm::~AForm(void) {
	return ;
}

AForm::AForm(AForm const &src) : _name(""), _isSigned(false), _reqGradeSign(0), _reqGradeExec(0), _target("") {
	*this = src;
	if (src.getReqGradeSign() < 1 || src.getReqGradeExec() < 1) {
		throw GradeTooHighException();
	}
	if (src.getReqGradeSign() > 150 || src.getReqGradeExec() > 150) {
		throw GradeTooLowException();
	}
	return ;
}

AForm &AForm::operator=(AForm const &src) {
	if (this != &src) {
		const_cast<std::string&>(this->_name) = src.getName();
		this->_isSigned = src.getIsSigned();
		const_cast<int&>(this->_reqGradeSign) = src.getReqGradeSign();
		const_cast<int&>(this->_reqGradeExec) = src.getReqGradeExec();
		const_cast<std::string&>(this->_target) = src.getTarget();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AForm const &in) {
	out << "Form: " << in.getName() << "\n";
	out << "Target: " << in.getTarget() << "\n";
	out << "Signed: " << std::boolalpha  << in.getIsSigned() << "\n";
	out << "Grade to sign: " << in.getReqGradeSign() << "\n";
	out << "Grade to exec: " << in.getReqGradeExec() << "\n";
	return (out);
}

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

void AForm::setTarget(std::string Target) {
	const_cast<std::string&>(this->_target) = Target;
}

void AForm::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= this->_reqGradeSign) {
		this->_isSigned = true;
	}
	if (b.getGrade() > this->_reqGradeSign) {
		throw AForm::GradeTooHighException();
	}
}
