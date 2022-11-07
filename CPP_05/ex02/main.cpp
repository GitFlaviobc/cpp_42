/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:30:23 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat *b;
	AForm *f;

	std::cout << "\n[ ShrubberyCreationForm ]\n";
	try {
		b = new Bureaucrat("Marvin", 1);
		f = new ShrubberyCreationForm("Marvine");
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
		f = new RobotomyRequestForm("Tried");
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
		f = new RobotomyRequestForm("Tried");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ PresidentialPardonForm - ok ]\n";
	try {
		b = new Bureaucrat("Cadet", 1);
		f = new PresidentialPardonForm("CPP");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ PresidentialPardonForm - Fail Grade / Execute ]\n";
	try {
		b = new Bureaucrat("Cadet", 150);
		f = new PresidentialPardonForm("Minishell");
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ PresidentialPardonForm - Fail Execute ]\n";
	try {
		b = new Bureaucrat("Cadet", 20);
		f = new PresidentialPardonForm("Psicine");
		std::cout << *b;
		b->signForm(*f);
		std::cout << *f;
		b->executeForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	return (0);
}
