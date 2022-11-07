/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/11 20:16:29 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "Span.hpp"

void	print(int element) {
	std::cout << element << " ";
}

int main(void) {
	Span test1(15);

	std::cout << "---------------Error no elements---------------\n";
	try {
		std::cout << test1.shortestSpan() << "\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}
	try {
		std::cout << test1.longestSpan() << "\n";
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}
	std::cout << "\n---------------Empty---------------\n";
	std::for_each(test1.getVector().begin(), test1.getVector().end(), print);
	std::cout << "\n";
	std::cout << "---------------Added Number 15 and -15 ---------------\n";
	test1.addNumber(15);
	test1.addNumber(-15);
	std::for_each(test1.getVector().begin(), test1.getVector().end(), print);
	std::cout << "\n";
	std::cout << "--------------- Span Distance check ---------------\n";
	std::cout << "Shortest Span: " <<  test1.shortestSpan() << "\n";
	std::cout << "Longtest Span: " <<  test1.longestSpan() << "\n";
	std::cout << "--------------- Added Random Numbers 0 to 30 ---------------\n";
	test1.addMax(0,30);
	std::for_each(test1.getVector().begin(), test1.getVector().end(), print);
	std::cout << "\n";
	std::cout << "--------------- Span Distance check ---------------\n";
	std::cout << "Shortest Span: " <<  test1.shortestSpan() << "\n";
	std::cout << "Longtest Span: " <<  test1.longestSpan() << "\n";
	std::cout << "\n---------------Error cannot add more elements---------------\n";
	try {
		test1.addNumber(2);
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}
	std::cout << "\n---------------PDF---------------\n";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	// std::cout << "\n---------------Just For Fun---------------\n";
	// Span test(1000000);
	// test.addMax(0, 30);
	// std::cout << "Total: " << test.getNint() << "\n";
	// for (int i = 0; i < 31; i++) {
	// 	size_t odds = std::count(test.getVector().begin(), test.getVector().end(), i);
	// 	std::cout << "The " << i << " appears: " << odds << " is: " << odds/static_cast<float>(test.getNint()) * 100 << " %.\n";
	// }
	return (0);
}
