/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonini- <fbonini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:54:36 by fbonini-          #+#    #+#             */
/*   Updated: 2022/07/10 15:47:06 by fbonini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
