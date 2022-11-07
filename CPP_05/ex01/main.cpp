/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:37:11 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat* b;
	Form* f;

	std::cout << "[ Errors Creating Form ]\n";
	try {
		f = new Form("Form1", -1, 1);
		std::cout << *f;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	try {
		f = new Form("Form1", 151, 1);
		std::cout << *f;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n[ Errors Signing Form ]\n";
	try {
		b = new Bureaucrat("Marvin", 2);
		f = new Form("Form2", 1, 1);
		std::cout << *b;
		b->signForm(*f);
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	try {
		b = new Bureaucrat("Marvin", 1);
		f = new Form("Form2", 1, 1);
		
		std::cout << "\n[ Not Signed ]\n" << *f;
		std::cout << "\n" << *b;
		b->signForm(*f);
		std::cout << "\n[ Signed ]\n" << *f;
		delete b;
		delete f;
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	return (0);
}
