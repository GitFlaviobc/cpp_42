/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/08 17:29:02 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char* argv[]) {
	if (argc == 2) {
		const std::string toConvert = argv[1];
		Convert converted(toConvert);
		std::cout << "char: " << converted.printChar() << "\n";
		std::cout << "int: " << converted.printInt() << "\n";
		std::cout << "float: " << converted.printFloat() << "\n";
		std::cout << "float: " << converted.printDouble() << "\n";
	}
	else {
		std::cerr << "Please use 1 argument.\nExample ./convert 42\n";
		return (1);
	}
	return (0);
}
