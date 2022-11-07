/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/29 14:35:22 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void) {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char arr2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	float arr3[10] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f};
	std::string arr4[10] = {"Marvin42", "Marvin43", "Marvin44", "Marvin45", "Marvin46", "Marvin47", "Marvin48", "Marvin49", "Marvin50", "Marvin51"};

	std::cout << "\n------------------INT ARRAY------------------\n";
	iter(arr, 10, printIter);
	std::cout << "\n";

	std::cout << "\n------------------CHAR ARRAY------------------\n";
	iter(arr2, 10, printIter);
	std::cout << "\n";

	std::cout << "\n------------------FLOAT ARRAY------------------\n";
	iter(arr3, 10, printIter);
	std::cout << "\n";

	std::cout << "\n------------------STRING ARRAY------------------\n";
	iter(arr4, 10, printIter);
	std::cout << "\n";
	return (0);
}
