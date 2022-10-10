/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/10 09:50:35 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {
	// Create array of int
	Array<int> a(10);
	// Create array of char
	Array<char> b(10);
	// Create array of float x and then copy to c
	Array<float> x(10);
	Array<float> c(x);
	// Create array of strings
	Array<std::string> d(5);
	// Create array of int size 0
	Array<int> h;

	std::cout << "------------------INT ARRAY------------------\n";
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	std::cout << a << "\n";

	std::cout << "------------------CHAR ARRAY------------------\n";
	for (int i = 0; i < 10; i++) {
		b[i] = static_cast<char>(i + 'a');
	}
	std::cout << b << "\n";

	std::cout << "------------------FLOAT ARRAY------------------\n";
	for (int i = 0; i < 10; i++) {
		c[i] = static_cast<float>(1.1f + static_cast<float>(i));
	}
	std::cout << c << "\n";

	std::cout << "------------------STRING ARRAY------------------\n";
	for (int i = 0; i < 5; i++) {
		d[i] = std::string("Marvin_") + static_cast<char>(i + '1');
	}
	std::cout << d << "\n";

	std::cout << "------------------Out of Range INDEX------------------\n";
	try {
		h[1];
	}
	catch (const std::exception& e) {
		std::cerr << e.what();
	}
	try {
		h[-1];
	}
	catch (const std::exception& e) {
		std::cerr << e.what();
	}
	return (0);
}
