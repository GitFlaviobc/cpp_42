/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ShrubberyCreationForm.cpp                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:09 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 17:38:55 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	*this = src;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	(void)src;
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

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
			"				ejm  |||\n"
			"				, -=-~| .-^- _\n";
		ofs << tree;
		ofs.close();
	}
}
