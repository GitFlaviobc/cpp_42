/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Harl.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 18:57:28 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:46:55 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return ;
}

void Harl::complain(std::string level) {
	// ReturnType (Class::*)(ParameterTypes...)
	typedef	void (Harl::*complains)(void);
	complains all_complains[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string AllLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (!AllLevel[i].compare(level)) {
			std::cout << "Called Complain: " << AllLevel[i] << std::endl << std::endl;
			(this->*all_complains[i])();
			std::cout << "-----------------------" <<std::endl;
			return;
		}
	}
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << std::endl;
}
