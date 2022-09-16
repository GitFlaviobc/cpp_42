/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonini- <fbonini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:54:07 by fbonini-          #+#    #+#             */
/*   Updated: 2022/09/16 18:03:34 by fbonini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::FTgetFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::FTgetLastName(void)
{
	return (this->_lastName);
}

std::string Contact::FTgetNickName(void)
{
	return (this->_nickName);
}

std::string Contact::FTgetPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string Contact::FTgetDarkestSecret(void)
{
	return (this->_darkestSecret);
}

void Contact::FTsetFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::FTsetLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::FTsetNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::FTsetPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::FTsetDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
