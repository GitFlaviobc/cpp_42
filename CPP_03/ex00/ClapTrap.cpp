/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ClapTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/23 08:05:31 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:42:55 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ClapTrap.hpp"

// -Constructors
ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("ClapTrap") {
	std::cout << "ClapTrap default constructor called\n";
	return ;
}

ClapTrap::ClapTrap (std::string const name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name) {
	std::cout << "ClapTrap String Constructor called!\n";
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << this->getName() << ": ClapTrap Destructor called!\n";
	return ;
}

// -Operators
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this != &rhs) {
		this->_hitPoints = rhs.getHitpoints();
		this->_energyPoints = rhs.getEnergypoints();
		this->_attackDamage = rhs.getAttackdamage();
		this->_name = rhs.getName();
	}
	return (*this);
}

// -Getters
const int &ClapTrap::getHitpoints(void) const {
	return (this->_hitPoints);
}

const int &ClapTrap::getEnergypoints(void) const {
	return (this->_energyPoints);
}

const int &ClapTrap::getAttackdamage(void) const {
	return (this->_attackDamage);
}

const std::string &ClapTrap::getName(void) const {
	return (this->_name);
}

// -Setters
void ClapTrap::setHitpoints(int Hitpoints) {
	this->_hitPoints = Hitpoints;
} 

void ClapTrap::setEnergypoints(int Energypoints) {
	this->_energyPoints = Energypoints;
} 

void ClapTrap::setAttackdamage(int Attackdamage) {
	this->_attackDamage = Attackdamage;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

// -Methods
void ClapTrap::attack(const std::string& target) {
	if (this->getHitpoints() <= 0) {
		std::cout << "ClapTrap " << this->_name << " I am dead, leave me alone\n";
		return ;
	}
	if (this->getEnergypoints() <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy left!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " has " << this->getEnergypoints() <<" EP left\n";
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->getHitpoints() <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!! Stop!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount <<" points of damage!\n";
	this->_hitPoints -= amount;
	if (this->getHitpoints() <= 0) {
		std::cout << "ClapTrap " << this->_name << " I died :(\n";
		this->setHitpoints(0);
	}
	std::cout << "ClapTrap " << this->_name << " has " << this->getHitpoints() <<" HP left\n";
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEnergypoints() <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy left!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repaired " << amount <<" points of damage!\n";
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " has " << this->getHitpoints() <<" HP left\n";
	std::cout << "ClapTrap " << this->_name << " has " << this->getEnergypoints() <<" EP left\n";
	return ;
}

// -Functions
std::ostream &operator<<(std::ostream &out, ClapTrap const &in) {
	out << "ClapTrap: " << in.getName()
		<< "\nhas " << in.getHitpoints() << " HP"
		<< "\nhas " << in.getEnergypoints() << " EP"
		<< "\nhas " << in.getAttackdamage() << " AD";
	return (out);
}
