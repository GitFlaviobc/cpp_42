/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/09 13:53:32 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "Base.hpp"

int main(void) {
	std::cout << "[ CLASS A ]\n";
	A *a = new A();
	identify(a);
	identify(*a);
	delete a;

	std::cout << "\n[ CLASS B ]\n";
	B *b = new B();
	identify(b);
	identify(*b);
	delete b;

	std::cout << "\n[ CLASS C ]\n";
	C *c = new C();
	identify(c);
	identify(*c);
	delete c;

	std::cout << "\n[ CLASS INVALID ]\n";
	Base *base = new Base();
	identify(base);
	identify(*base);
	delete base;

	std::cout << "\n[ RANDOM CLASS]\n";
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base *rand4 = generate();
	Base *rand5 = generate();
	std::cout << "[ RAND 1 CLASS]\n";
	identify(rand1);
	identify(*rand1);
	std::cout << "[ RAND 2 CLASS]\n";
	identify(rand2);
	identify(*rand2);
	std::cout << "[ RAND 3 CLASS]\n";
	identify(rand3);
	identify(*rand3);
	std::cout << "[ RAND 4 CLASS]\n";
	identify(rand4);
	identify(*rand4);
	std::cout << "[ RAND 5 CLASS]\n";
	identify(rand5);
	identify(*rand5);
	delete rand1;
	delete rand2;
	delete rand3;
	delete rand4;
	delete rand5;
	return (0);
}
