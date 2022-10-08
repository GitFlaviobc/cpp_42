/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* RobotomyRequestForm.cpp                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:08:57 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 17:37:59 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
	*this = src;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	(void)src;
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void RobotomyRequestForm::execute(const class Bureaucrat &executor) const {
	unsigned int seed;
	int randNum = rand_r(&seed) % (10);

	if (this->getIsSigned() == false) {
		throw AForm::UnsignedFormException();
	}
	else if (executor.getGrade() > this->getReqGradeExec()) {
		throw AForm::GradeTooHighException();
	}
	else if (executor.getGrade() <= this->getReqGradeExec() && randNum < 5) {
		std::cout << "zzzzzzzz\n" << this->getTarget() << " has been robotomized successfully.\n";
	}
	else if (executor.getGrade() <= this->getReqGradeExec() && randNum >= 5) {
		std::cout << "zzzzzzzz\n" << this->getTarget() << " failed to be robotomized.\n";
	}
}
