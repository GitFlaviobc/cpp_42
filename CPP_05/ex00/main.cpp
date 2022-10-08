/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 21:55:39 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat *b;

	std::cout << "----------------- Marvin 1 -------------\n";
	try {
		b = new Bureaucrat("Marvin", 1);
		std::cout << *b;
		std::cout << "Created!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	std::cout << "----------------- Marvin 0 (Error) -------------\n";
	try {
		b->incrementGrade();
		std::cout << "Incremented!\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
		std::cout << "Failed\n";
	}
	std::cout << *b << "\n";
	std::cout << "----------------- Marvin 2 Ok -------------\n";
	try {
		b->decrementGrade();
		std::cout << "Decremented!\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
		std::cout << "Failed\n";
	}
	std::cout << *b << "\n";
	delete b;
	std::cout << "----------------- Mouli 150 -------------\n";
	try {
		b = new Bureaucrat("Mouli", 150);
		std::cout << *b;
		std::cout << "Created!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	std::cout << "----------------- Mouli 151 (Error) -------------\n";
	try {
		b->decrementGrade();
		std::cout << "Decremented!\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
		std::cout << "Failed\n";
	}
	std::cout << *b << "\n";
	std::cout << "----------------- Mouli 149 Ok -------------\n";
	try {
		b->incrementGrade();
		std::cout << "Incremented!\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
		std::cout << "Failed\n";
	}
	std::cout << *b << "\n";
	delete b;
	std::cout << "----------------- Cadet -1 -------------\n";
	try {
		b = new Bureaucrat("Cadet", -1);
		std::cout << *b;
		std::cout << "Created!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	std::cout << "----------------- Cadet 300 -------------\n";
	try {
		b = new Bureaucrat("Cadet", 300);
		std::cout << *b;
		std::cout << "Created!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	std::cout << "----------------- Cadet B to Copy -------------\n";
	try {
		b = new Bureaucrat("Cadet", 42);
		std::cout << *b << " " << b;
		std::cout << "\nCreated!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	Bureaucrat *c;
	std::cout << "----------------- Cadet C will Copy -------------\n";
	try {
		c = new Bureaucrat();
		std::cout << *c << " " << c;
		std::cout << "\nCreated!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Create!\n";
	}
	std::cout << "----------------- The Copy -------------\n";
	try {
		*c = *b;
		std::cout << "\nThe b: " << *b << " " << b;
		std::cout << "\nThe c: " << *c << " " << c;
		std::cout << "\nCopied!\n";
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Fail to Copy!\n";
	}
	delete c;
	delete b;
	return (0);
}
