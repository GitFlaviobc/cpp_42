/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:34:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	const Animal *animals[10];

	std::cout << "\n----------Constructor-------------\n";
	std::cout << "--------Dog-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 0; i < 5; i++) {
		animals[i] = new Dog();
		std::cout << "\n--------Next Dog-----------\n";
	}
	std::cout << "\n-----------------------\n";
	std::cout << "--------Cat-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 5; i < 10; i++) {
		animals[i] = new Cat();
		std::cout << "\n--------Next Cat-----------\n";
	}

	std::cout << "\n-----------Destructor------------\n";
	std::cout << "--------Dog-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 0; i < 5; i++) {
		delete animals[i];
		std::cout << "\n--------Next Dog-----------\n";
	}
	std::cout << "\n-----------------------\n";
	std::cout << "--------Cat-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 5; i < 10; i++) {
		delete animals[i];
		std::cout << "\n--------Next Cat-----------\n";
	}
	Cat *cat = new Cat();
	std::cout << "\nBrain: \n\n";
	std::cout << "Cat ideas\n";
	std::cout << "=====================\n";
	std::cout << "\n";
	std::cout << *cat->getBrain();
	std::cout << "\n";
	delete cat;
	return (0);
}
