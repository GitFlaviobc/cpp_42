/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* FragTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 13:13:14 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:52:46 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	this->setName("FragTrap");
	this->setClassname("FragTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	this->setClassname("FragTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << this->getName() << ": FragTrap Destructor called!\n";
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap() {
	std::cout << this->getClassname() << ": Copy Constructor called!\n";
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
	std::cout << this->getClassname() << ": Copy assignment operator called!\n";
	const_cast<std::string &>(this->_name) = src.getName();
	this->_hitPoints = src.getHitpoints();
	this->_energyPoints = src.getEnergypoints();
	this->_attackDamage = src.getAttackdamage();
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << ", I am dead, leave me alone...\n";
		return ;
	}
	std::cout << "✋\n";
	return ;
}
