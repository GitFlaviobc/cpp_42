/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* contact.hpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:55:53 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/17 19:55:54 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		std::string	FTgetFirstName(void);
		std::string	FTgetLastName(void);
		std::string	FTgetNickName(void);
		std::string	FTgetPhoneNumber(void);
		std::string	FTgetDarkestSecret(void);

		void	FTsetFirstName(std::string firstName);
		void	FTsetLastName(std::string lastName);
		void	FTsetNickName(std::string nickName);
		void	FTsetPhoneNumber(std::string phoneNumber);
		void	FTsetDarkestSecret(std::string darkestSecret);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
