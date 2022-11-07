/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ScavTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 09:10:30 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:50:46 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ScavTrap.hpp"

// -Constructors
ScavTrap::ScavTrap(void) : ClapTrap() {
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	this->setName("ScavTrap");
	this->setClassname("ScavTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	this->setClassname("ScavTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap() {
	std::cout << this->getClassname() << ": Copy Constructor called!\n";
	*this = rhs;
	return ;
}

// -Destructors
ScavTrap::~ScavTrap(void) {
	std::cout << this->getName() << ": ScavTrap Destructor called!\n";
	return ;
}

// -Operators
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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
void ScavTrap::attack(const std::string& target) {
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << " I am dead, leave me alone\n";
		return ;
	}
	if (this->getEnergypoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << " has no energy left!\n";
		return ;
	}
	std::cout << this->getClassname() << ": " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
	std::cout << this->getClassname() << ": " << this->_name << " has " << this->getEnergypoints() <<" EP left\n";
	return ;
}

void	ScavTrap::guardGate(void) const {
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << ", I am dead, leave me alone...\n";
		return ;
	}
	std::cout << this->getClassname() << ": " << this->_name << ", is now in Gate keeper mode\n";
	return ;
}
