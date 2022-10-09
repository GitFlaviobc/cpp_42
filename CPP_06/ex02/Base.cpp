/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Base.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/09 08:59:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/09 13:54:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Base.hpp"
#include <stdint.h>
#include <cstdlib>

int rand_gen(int min, int max) {
	return ((int)((reinterpret_cast<uintptr_t>(&min) / rand()) % (max + 1 + (-min))) + min);
}

Base*	new_A(void) {
	return (new A());
}

Base*	new_B(void) {
	return (new B());
}

Base*	new_C(void) {
	return (new C());
}

Base*	generate(void) {
	int		rand;
	t_funct	*baseRay[3];

	baseRay[0] = new_A;
	baseRay[1] = new_B;
	baseRay[2] = new_C;
	rand = rand_gen(0,2);
	return(baseRay[rand]());
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Type: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type: C\n";
	else
		std::cerr << "Invalid pointer\n";
	return;
}

void	identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "Type: A\n";
	}
	catch (const std::exception& e1) {
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "Type: B\n";
		}
		catch (const std::exception& e2) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "Type: C\n";
			}
			catch (const std::exception& e3) {
				std::cerr << "Invalid reference\n";
			}
		}
	}
	return;
}
