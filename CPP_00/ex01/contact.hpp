/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonini- <fbonini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:54:43 by fbonini-          #+#    #+#             */
/*   Updated: 2022/07/10 15:46:14 by fbonini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
