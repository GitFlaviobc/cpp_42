/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ClapTrap.cpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/23 19:23:18 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:50:59 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name("ClapTrap"), _className("ClapTrap") {
	std::cout << this->getClassname() << ": " << "Default Constructor called!\n";
	return;
}

ClapTrap::ClapTrap (std::string const name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name), _className("ClapTrap") {
	std::cout << this->getClassname() << ": " << "String Constructor called!\n";
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->getName() << ": ClapTrap Destructor called!\n";
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << this->getClassname() << ": " << "Copy Constructor called!\n";
	*this = src;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
	std::cout << this->getClassname() << ": " << "Copy assignment operator called!\n";
	const_cast<std::string &>(this->_name) = src.getName();
	this->_hitPoints = src.getHitpoints();
	this->_energyPoints = src.getEnergypoints();
	this->_attackDamage = src.getAttackdamage();
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
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

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << " is already dead!! Stop!\n";
		return ;
	}
	std::cout << this->getClassname() << ": " << this->_name << " took " << amount <<" points of damage!\n";
	this->_hitPoints -= amount;
	if (this->getHitpoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << " I died :(\n";
		this->setHitpoints(0);
	}
	std::cout << this->getClassname() << ": " << this->_name << " has " << this->getHitpoints() <<" HP left\n";
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEnergypoints() <= 0) {
		std::cout << this->getClassname() << ": " << this->_name << " has no energy left!\n";
		return ;
	}
	std::cout << this->getClassname() << ": " << this->_name << " repaired " << amount <<" points of damage!\n";
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << this->getClassname() << ": " << this->_name << " has " << this->getHitpoints() <<" HP left\n";
	std::cout << this->getClassname() << ": " << this->_name << " has " << this->getEnergypoints() <<" EP left\n";
	return ;
} 

const int &ClapTrap::getHitpoints(void) const {
	return (this->_hitPoints);
}

void ClapTrap::setHitpoints(int Hitpoints) {
	this->_hitPoints = Hitpoints;
} 

const int &ClapTrap::getEnergypoints(void) const {
	return (this->_energyPoints);
}

void ClapTrap::setEnergypoints(int Energypoints) {
	this->_energyPoints = Energypoints;
} 

const int &ClapTrap::getAttackdamage(void) const {
	return (this->_attackDamage);
}

void ClapTrap::setAttackdamage(int Attackdamage) {
	this->_attackDamage = Attackdamage;
}

const std::string &ClapTrap::getName(void) const {
	return (this->_name);
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

const std::string &ClapTrap::getClassname(void) const {
	return (this->_className);
}

void ClapTrap::setClassname(std::string Classname) {
	this->_className = Classname;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &in) {
	out << in.getClassname() << ": " << in.getName()
		<< "\nhas " << in.getHitpoints() << " HP"
		<< "\nhas " << in.getEnergypoints() << " EP"
		<< "\nhas " << in.getAttackdamage() << " AD";
	return (out);
}
