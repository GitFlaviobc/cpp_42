/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* phonebook.cpp                                         :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:56:24 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:41:44 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "phonebook.hpp"

// -Constructor
PhoneBook::PhoneBook(void) : _total(0), _index(0) {
	return;
}

// -Destructor
PhoneBook::~PhoneBook(void) {
	return ;
}

// -Methods
void	PhoneBook::addContact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret) {
	this->_contacts[this->_index].setFirstName(firstName);
	this->_contacts[this->_index].setLastName(lastName);
	this->_contacts[this->_index].setNickName(nickName);
	this->_contacts[this->_index].setPhoneNumber(phoneNumber);
	this->_contacts[this->_index].setDarkestSecret(darkestSecret);
	if (this->_total < 8)
		this->_total++;
	this->_index++;
	if (this->_index >= 8)
		this->_index %= 8;
}

int	PhoneBook::getTotalContacts(void) {
	return (this->_total);
}

int	PhoneBook::validContact(int index) {
	if (index >= 0 && index < this->_total)
		return (1);
	return (0);
}

void PhoneBook::printOneContact(int index) {
	std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::_printFormattedField(std::string str) {
	if (str.length() > 9)
		std::cout << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
}

void PhoneBook::printAllContacts(void) {
	std::cout << "| " << "   INDEX  " << " | ";
	std::cout << "FIRST NAME" << " | ";
	std::cout << " LAST NAME" << " | ";
	std::cout << " NICKNAME " << " |" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;;
	for (int i = 0; i < this->_total; i++) {
		std::cout << "| " << std::right << std::setw(10) << i + 1 << " | ";
		_printFormattedField(this->_contacts[i].getFirstName());
		std::cout << " | ";
		_printFormattedField(this->_contacts[i].getLastName());
		std::cout << " | ";
		_printFormattedField(this->_contacts[i].getNickName());
		std::cout << " |" << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
}
