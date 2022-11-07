/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* PresidentialPardonForm.cpp                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:00 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 14:45:18 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "PresidentialPardonForm.hpp"

// -Constructors
PresidentialPardonForm::PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : AForm(rhs) {
	*this = rhs;
	return ;
}

// -Destructors
PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

// -Operators
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	(void)rhs;
	return (*this);
}

// -Getters
const std::string &PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

// -Methods
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::UnsignedFormException();
	}
	else if (executor.getGrade() > this->getReqGradeExec()) {
		throw AForm::GradeTooHighException();
	}
	else if (executor.getGrade() <= this->getReqGradeExec()) {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
	}
}
