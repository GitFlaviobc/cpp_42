/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 14:27:48 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	{
		std::cout << "\n---------- Stack -------------\n";
		// Now it is an Abstract class won´t work
		// AAnimal wrong;
		Cat ok;
		Dog fine;
		Brain ok_too;
	}
	std::cout << "\n---------- Stack -------------\n";
	{
		const AAnimal* wrong = new AAnimal();
		delete wrong;
	}
	std::cout << "\n---------- ? -------------\n";
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;
		delete i;
	}
	const AAnimal *animals[10];

	std::cout << "\n----------Constructor-------------\n";
	std::cout << "--------Dog-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 0; i < 5; i++) {
		animals[i] = new Dog();
		std::cout << "\n--------Next-----------\n";
	}
	std::cout << "\n-----------------------\n";
	std::cout << "--------Cat-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 5; i < 10; i++) {
		animals[i] = new Cat();
		std::cout << "\n--------Next-----------\n";
	}

	std::cout << "\n-----------Destructor------------\n";
	std::cout << "--------Dog-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 0; i < 5; i++) {
		delete animals[i];
		std::cout << "\n--------Next-----------\n";
	}
	std::cout << "\n-----------------------\n";
	std::cout << "--------Dog-------------";
	std::cout << "\n-----------------------\n";
	for (int i = 5; i < 10; i++) {
		delete animals[i];
		std::cout << "\n--------Next-----------\n";
	}

	std::cout << "\nBrain: \n\n";
	std::cout << "Cat ideas\n";
	std::cout << "=====================\n";
	Cat *cat = new Cat();
	std::cout << "\n";
	std::cout << *cat->getBrain();
	std::cout << "\n";
	delete cat;
	return (0);
}
