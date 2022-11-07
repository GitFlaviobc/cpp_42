/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:55:58 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:40:57 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "main.hpp"

void	searchInPhoneBook(PhoneBook myPhoneBook) {
	std::string			option;
	std::stringstream	buffer;
	int					index;

	std::cout << CLEAR;
	if (myPhoneBook.getTotalContacts() == 0) {
		std::cout << "PhoneBook is empty, please add a contact first." << std::endl;
		return ;
	}
	myPhoneBook.printAllContacts();
	std::cout << "Please enter the contact index: ";
	std::cin >> option;
	buffer << option;
	buffer >> index;
	if (myPhoneBook.validContact(index - 1) == 0) {
		std::cout << "Error!" << std::endl;
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	myPhoneBook.printOneContact(index - 1);
	std::cin.ignore();
}

int	checkValidField(std::string field) {
	for (std::string::iterator it = field.begin(); it != field.end(); ++it)
	if (!std::isalnum(*it)) {
		std::cout << "Error!" << std::endl;
		std::cout << "Invalid Field!" << std::endl;
		return (0);
	}
	return (1);
}

void	addToPhoneBook(PhoneBook &myPhoneBook) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << CLEAR;
	std::cout << "Insert the contact information:" << std::endl;
	// Ignore the \n or \t in the buffer of cin
	std::cin.ignore();
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	if (!checkValidField(firstName))
		return ; 
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	if (!checkValidField(lastName))
		return ; 
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	if (!checkValidField(nickName))
		return ; 
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	if (!checkValidField(phoneNumber))
		return ; 
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	if (!checkValidField(darkestSecret))
		return ; 
	myPhoneBook.addContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	std::cout << "Contact " << firstName << " added to PhoneBook." << std::endl;
}

void	introMessage(void) {
	std::cout << std::endl;
	std::cout << "Welcome to a really bad PhoneBook!" << std::endl;
	std::cout << "To use the PhoneBook is really simple:" << std::endl;
	std::cout << "Type ADD, to add a new contact" << std::endl;
	std::cout << "Type SEARCH, to search contacts" << std::endl;
	std::cout <<  "Type EXIT, to exit this amazing PhoneBook"  << std::endl;
}

int	main(void) {
	PhoneBook	myPhoneBook;
	std::string	option;

	std::cout << CLEAR;
	while (!std::cin.eof()) {
		introMessage();
		std::cin >> option;
		std::cout << std::endl;
		if (option == "ADD")
			addToPhoneBook(myPhoneBook);
		else if (option == "SEARCH")
			searchInPhoneBook(myPhoneBook);
		else if (option == "EXIT")
			break ;
		else if (!std::cin.eof()) {
			std::cout << CLEAR;
			std::cout << "Error!" << std::endl;
			std::cout << "Invalid Input!" << std::endl;
		}
	}
	std::cout << CLEAR;
	return (0);
}
