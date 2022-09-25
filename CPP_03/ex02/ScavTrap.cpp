/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ScavTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/24 09:10:30 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/24 12:39:23 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	this->setName("ScavTrap");
	this->setClassname("ScavTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	this->setClassname("ScavTrap");
	std::cout << this->getClassname() << ": Default Constructor called!\n";
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << this->getName() << ": ScavTrap Destructor called!\n";
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	std::cout << this->getClassname() << ": Copy Constructor called!\n";
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
	std::cout << this->getClassname() << ": Copy assignment operator called!\n";
	const_cast<std::string &>(this->_name) = src.getName();
	this->_hitPoints = src.getHitpoints();
	this->_energyPoints = src.getEnergypoints();
	this->_attackDamage = src.getAttackdamage();
	return (*this);
}

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
