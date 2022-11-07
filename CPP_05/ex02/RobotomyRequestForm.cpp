/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* RobotomyRequestForm.cpp                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:08:57 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 07:49:07 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <stdint.h>

// -Constructors
RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : AForm(rhs) {
	*this = rhs;
	return ;
}

// -Destructors
RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

// -Operators
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	(void)rhs;
	return (*this);
}

// -Getters
const std::string &RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

// -Methods
int rand_gen(int min, int max) {
	return ((int)((reinterpret_cast<uintptr_t>(&min) / rand()) % (max + 1 + (-min))) + min);
}

void RobotomyRequestForm::execute(const class Bureaucrat &executor) const {
	int		rand;

	rand = rand_gen(1,2);
	if (this->getIsSigned() == false) {
		throw AForm::UnsignedFormException();
	}
	else if (executor.getGrade() > this->getReqGradeExec()) {
		throw AForm::GradeTooHighException();
	}
	else if (executor.getGrade() <= this->getReqGradeExec() && rand == 1) {
		std::cout << "drilling noises\n" << this->getTarget() << " has been robotomized successfully.\n";
	}
	else if (executor.getGrade() <= this->getReqGradeExec() && rand == 2) {
		std::cout << "drilling noises\n" << this->getTarget() << " failed to be robotomized.\n";
	}
}
