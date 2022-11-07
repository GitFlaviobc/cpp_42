/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Intern.cpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 17:32:02 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:24:33 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// -Constructors
Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &rhs) {
	*this = rhs;
	return ;
}

// -Destructors
Intern::~Intern(void) {
	return ;
}

// -Operators
Intern &Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
}

// -Methods
AForm *Intern::shrubberyCreationForm(const std::string target) const {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::robotomyRequestForm(const std::string target) const {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::presidentialPardonForm(const std::string target) const {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::invalidForm(const std::string target) const {
	(void)target;
	return (NULL);
}

AForm* Intern::makeForm(const std::string name, const std::string target) {
	t_forms all_forms[] = {&Intern::shrubberyCreationForm,
		&Intern::robotomyRequestForm,
		&Intern::presidentialPardonForm,
		&Intern::invalidForm};
	std::string formType[4] = {"shrubbery creation", "robotomy request", "presidential pardon", "invalid form"};

	for (int i = 0; i < 3; i++) {
		if (!formType[i].compare(name)) {
			return ((this->*all_forms[i])(target));
		}
	}
	throw Intern::NoMatchException();
	return ((this->*all_forms[3])(target));
}

// -Exceptions
const char* Intern::NoMatchException::what(void) const throw() {
	return ("Form does not match!");
}
