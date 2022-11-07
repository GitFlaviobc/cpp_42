/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* FragTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 13:13:14 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:52:21 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "FragTrap.hpp"

// -Constructors
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

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap() {
	std::cout << this->getClassname() << ": Copy Constructor called!\n";
	*this = rhs;
	return ;
}

// -Destructors
FragTrap::~FragTrap(void) {
	std::cout << this->getName() << ": FragTrap Destructor called!\n";
	return ;
}

// -Operators
FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << this->getClassname() << ": Copy assignment operator called!\n";
	if (this != &rhs) {
		this->_hitPoints = rhs.getHitpoints();
		this->_energyPoints = rhs.getEnergypoints();
		this->_attackDamage = rhs.getAttackdamage();
		this->_name = rhs.getName();
	}
	return (*this);
}

// -Methods
void FragTrap::highFivesGuys(void) {
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << ", I am dead, leave me alone...\n";
		return ;
	}
	std::cout << "✋\n";
	return ;
}
