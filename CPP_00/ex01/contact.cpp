/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* contact.cpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/17 19:55:47 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/17 20:01:32 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */


#include "contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::FTgetFirstName(void) {
	return (this->_firstName);
}

std::string Contact::FTgetLastName(void) {
	return (this->_lastName);
}

std::string Contact::FTgetNickName(void) {
	return (this->_nickName);
}

std::string Contact::FTgetPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string Contact::FTgetDarkestSecret(void) {
	return (this->_darkestSecret);
}

void Contact::FTsetFirstName(std::string firstName) {
	this->_firstName = firstName;
}

void Contact::FTsetLastName(std::string lastName) {
	this->_lastName = lastName;
}

void Contact::FTsetNickName(std::string nickName) {
	this->_nickName = nickName;
}

void Contact::FTsetPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::FTsetDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}
