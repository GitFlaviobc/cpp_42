/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ShrubberyCreationForm.cpp                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:09 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:01:02 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// -Constructors
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	*this = src;
	return ;
}

// -Destructors
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

// -Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	(void)src;
	return (*this);
}

// -Getters
const std::string &ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

// -Methods
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::UnsignedFormException();
	}
	else if (executor.getGrade() > this->getReqGradeExec()) {
		throw AForm::GradeTooHighException();
	}
	else if (executor.getGrade() <= this->getReqGradeExec()) {
		std::string fileOutput(this->getTarget() + "_shrubbery");
		std::ofstream ofs(fileOutput.c_str());
		if (ofs.fail()) {
			throw AForm::FileOutputException();
		}
		std::string tree =
			"				 # #### ## #\n"
			"			  ### \\/#|### |/####\n"
			"			##\\/#/ \\||/##/_/##/_#\n"
			"			###  \\/###|/ \\/ # ###\n"
			"		##_\\_#\\_\\## | #/###_/_####\n"
			"		## #### # \\ #| /  #### ##/##\n"
			"		__#_--###`  ||,###---###-~\n"
			"					\\ ||\n"
			"					|||\n"
			"					|||\n"
			"					|||\n"
			"				, -=-~| .-^- _\n";
		ofs << tree;
		ofs.close();
	}
}
