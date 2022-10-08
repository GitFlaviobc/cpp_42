/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Bureaucrat.cpp                                        :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/01 19:09:30 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 09:28:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Invalid Bureaucrat Grade, to high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Invalid Bureaucrat Grade, to low!");
}

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

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
	if (src.getGrade() < 1) {
		throw GradeTooHighException();
	}
	if (src.getGrade() > 150) {
		throw GradeTooLowException();
	}
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src) {
		const_cast<std::string&>(this->_name) = src.getName();
		this->_grade = src.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in) {
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << ".\n";
	return (out);
}

const int &Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

const std::string &Bureaucrat::getName(void) const {
	return (this->_name);
}

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

void Bureaucrat::signForm(const class AForm &form) const {
	try {
		(*const_cast<AForm*>(&form)).beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << ".\n";
	}
	catch (const std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << "\n";
	}
}

void Bureaucrat::executeForm(const AForm &form) const {
	try {
		(*const_cast<AForm*>(&form)).execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << ".\n";
	}
	catch (const std::exception& e) {
		std::cout << this->getName()
				<< " couldn't execute "
				<< form.getName()
				<< " because "
				<< e.what()
				<< "\n";
	}
}