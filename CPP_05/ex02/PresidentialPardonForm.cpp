/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* PresidentialPardonForm.cpp                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:00 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 17:36:37 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
	*this = src;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	(void)src;
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

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
