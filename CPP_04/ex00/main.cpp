/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/28 16:42:23 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	{
		const Animal* meta = new Animal();
		std::cout << "---------------------\n";
		const Animal* j = new Dog();
		std::cout << "---------------------\n";
		const Animal* i = new Cat();
		std::cout << "---------------------\n";
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << "---------------------\n";
		delete meta;
		std::cout << "---------------------\n";
		delete j;
		std::cout << "---------------------\n";
		delete i;
		std::cout << "---------------------\n";
	}
	{
		std::cout << "\n---------------------\n";
		const WrongAnimal* wrong = new WrongAnimal();
		std::cout << "---------------------\n";
		const WrongAnimal* wcat = new WrongCat();
		std::cout << "--------Wrong Animal-------------\n";
		wrong->makeSound();
		std::cout << "--------Wrong cat-------------\n";
		wcat->makeSound();
		std::cout << "---------------------\n";
		delete wrong;
		std::cout << "---------------------\n";
		delete wcat;
		std::cout << "---------------------\n";
	}
	return (0);
}
