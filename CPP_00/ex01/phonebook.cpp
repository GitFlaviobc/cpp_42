/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* phonebook.cpp                                         :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:56:24 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/17 19:57:36 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
	this->_total = 0;
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::FTaddContact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret) {
	this->_contacts[this->_index].FTsetFirstName(firstName);
	this->_contacts[this->_index].FTsetLastName(lastName);
	this->_contacts[this->_index].FTsetNickName(nickName);
	this->_contacts[this->_index].FTsetPhoneNumber(phoneNumber);
	this->_contacts[this->_index].FTsetDarkestSecret(darkestSecret);
	if (this->_total < 8)
		this->_total++;
	this->_index++;
	if (this->_index >= 8)
		this->_index %= 8;
}

int	PhoneBook::FTgetTotalContacts(void) {
	return (this->_total);
}

int	PhoneBook::FTvalidContact(int index) {
	if (index >= 0 && index < this->_total)
		return (1);
	return (0);
}

void PhoneBook::FTprintOneContact(int index) {
	std::cout << "First Name: " << this->_contacts[index].FTgetFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[index].FTgetLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].FTgetNickName() << std::endl;
	std::cout << "Phone Number: " << this->_contacts[index].FTgetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[index].FTgetDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::_FTprintFormattedField(std::string str) {
	if (str.length() > 9)
		std::cout << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
}

void PhoneBook::FTprintAllContacts(void) {
	std::cout << "| " << "   INDEX  " << " | ";
	std::cout << "FIRST NAME" << " | ";
	std::cout << " LAST NAME" << " | ";
	std::cout << " NICKNAME " << " |" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;;
	for (int i = 0; i < this->_total; i++) {
		std::cout << "| " << std::right << std::setw(10) << i + 1 << " | ";
		_FTprintFormattedField(this->_contacts[i].FTgetFirstName());
		std::cout << " | ";
		_FTprintFormattedField(this->_contacts[i].FTgetLastName());
		std::cout << " | ";
		_FTprintFormattedField(this->_contacts[i].FTgetNickName());
		std::cout << " |" << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
}
