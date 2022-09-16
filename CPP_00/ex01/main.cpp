/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonini- <fbonini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:54:14 by fbonini-          #+#    #+#             */
/*   Updated: 2022/07/10 20:28:43 by fbonini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	FTsearchInPhoneBook(PhoneBook myPhoneBook)
{
	int index;

	std::cout << CLEAR;
	if (myPhoneBook.FTgetTotalContacts() == 0)
	{
		std::cout << "PhoneBook is empty, please add a contact first." << std::endl;
		return ;
	}
	myPhoneBook.FTprintAllContacts();
	std::cout << "Please enter the contact index: ";
	std::cin >> index;
	if (myPhoneBook.FTvalidContact(index - 1) == 0)
	{
		std::cout << "Error!" << std::endl;
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	myPhoneBook.FTprintOneContact(index - 1);
}

int	FTcheckValidField(std::string field)
{
	for (std::string::iterator it = field.begin(); it != field.end(); ++it)
	if (!std::isalnum(*it))
	{
		std::cout << "Error!" << std::endl;
		std::cout << "Field in the phonebook can´t be empty!" << std::endl;
		return (0);
	}
	return (1);
}

void	FTaddToPhoneBook(PhoneBook &myPhoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << CLEAR;
	std::cout << "Insert the contact information:" << std::endl;
	std::cin.ignore();
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	if (!FTcheckValidField(firstName))
		return ; 
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	if (!FTcheckValidField(lastName))
		return ; 
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	if (!FTcheckValidField(nickName))
		return ; 
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	if (!FTcheckValidField(phoneNumber))
		return ; 
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	if (!FTcheckValidField(darkestSecret))
		return ; 
	myPhoneBook.FTaddContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	std::cout << "Contact " << firstName << " added to PhoneBook." << std::endl;
}

void	FTintroMessage(void)
{
	std::cout << std::endl;
	std::cout << "Welcome to a really bad PhoneBook!" << std::endl;
	std::cout << "To use the PhoneBook is really simple:" << std::endl;
	std::cout << "Type ADD, to add a new contact" << std::endl;
	std::cout << "Type SEARCH, to search contacts" << std::endl;
	std::cout <<  "Type EXIT, to exit this amazing PhoneBook"  << std::endl;
}

int	main(void)
{
	PhoneBook myPhoneBook;
	std::string	option;

	std::cout << CLEAR;
	while (true)
	{
		FTintroMessage();
		std::cin >> option;
		std::cout << std::endl;
		if (option == "ADD")
			FTaddToPhoneBook(myPhoneBook);
		else if (option == "SEARCH")
			FTsearchInPhoneBook(myPhoneBook);
		else if (option == "EXIT")
			break ;
		else
		{
			std::cout << "Error!" << std::endl;
			std::cout << "Invalid Input!" << std::endl;
		}
		
	}
	return (0);
}
