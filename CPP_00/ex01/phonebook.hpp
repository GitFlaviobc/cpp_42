/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* phonebook.hpp                                         :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:56:35 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:41:49 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include "contact.hpp"

class PhoneBook {
	public:
		// -Constructor
		PhoneBook(void);
		
		// -Destructor
		~PhoneBook(void);

		// -Methods
		void	addContact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret);
		int		validContact(int index);
		int		getTotalContacts(void);
		void	printAllContacts(void);
		void	printOneContact(int index);

	private:
		Contact	_contacts[8];
		int		_total;
		int		_index;
		void	_printFormattedField(std::string str);
};


#endif
