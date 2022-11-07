/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/10 11:48:22 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

void	print(int element) {
	std::cout << element << " ";
}

int main(void) {
	std::vector<int>	Avec;
	std::list<int>		Alist;
	
	std::cout << "\n-------------- Avec --------------\n";
	for (int i = 0; i < 10; i++) {
		Avec.push_back(i);
	}
	std::for_each(Avec.begin(), Avec.end(), print);
	std::cout << "\nSearch for value 3:\nThe value: ";
	try {
		std::vector<int>::iterator itv = easyfind(Avec, 3);
		std::cout << *itv << "\n\n";
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "Search for value 42:\nThe value: ";
	try {
		std::vector<int>::iterator itv = easyfind(Avec, 42);
		std::cout << *itv << "\n";
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n-------------- Alist --------------\n";
	for (int i = 9; i >= 0; i--) {
		Alist.push_back(i);
	}
	std::for_each(Alist.begin(), Alist.end(), print);
	std::cout << "\nSearch for value 3:\nThe value: ";
	try {
		std::list<int>::iterator itl = easyfind(Alist, 3);
		std::cout << *itl << "\n\n";
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "Search for value 42:\nThe value: ";
	try {
		std::list<int>::iterator itl = easyfind(Alist, 42);
		std::cout << *itl << "\n";
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	return (0);
}
