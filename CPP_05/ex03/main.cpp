/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:38:45 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat *b;
	Intern i;
	AForm *f;

	std::cout << "\n[ ShrubberyCreationForm ]\n";
	try {
		b = new Bureaucrat("Marvin", 1);
		f = i.makeForm("shrubbery creation", "Marvine");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ RobotomyRequestForm 50/50 ]\n";
	try {
		b = new Bureaucrat("One_try", 1);
		f = i.makeForm("robotomy request", "Tried");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n[ RobotomyRequestForm 50/50 ]\n";
	try {
		b = new Bureaucrat("Two_tries", 1);
		f = i.makeForm("robotomy request", "Tried");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ PresidentialPardonForm - ok]\n";
	try {
		b = new Bureaucrat("Cadet", 1);
		f = i.makeForm("presidential pardon", "CPP");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ Whatever Invalid ]\n";
	try {
		b = new Bureaucrat("Cadet", 150);
		f = i.makeForm("invalid form", "Minishell");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	delete b;

	std::cout << "\n[ Invalid too ]\n";
	try {
		b = new Bureaucrat("Cadet", 20);
		f = i.makeForm("This does not exist", "Piscine");
		std::cout << *b;
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	delete b;
	return (0);
}
