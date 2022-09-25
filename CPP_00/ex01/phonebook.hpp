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
		PhoneBook(void);
		~PhoneBook(void);
		void	FTaddContact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret);
		int		FTvalidContact(int index);
		int		FTgetTotalContacts(void);
		void	FTprintAllContacts(void);
		void	FTprintOneContact(int index);
	private:
		Contact	_contacts[8];
		int		_total;
		int		_index;
		void	_FTprintFormattedField(std::string str);
};

#endif
