/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Form.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/03 17:57:36 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {
	public:
		Form(void);
		Form(const std::string name, const int reqGradeSign, const int reqGradeExec);
		~Form(void);
		Form(Form const &src);
		Form &operator=(Form const &src);

		class GradeTooHighException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		const std::string &getName(void) const;
		bool getIsSigned(void) const;
		int getReqGradeSign(void) const;
		int getReqGradeExec(void) const;

		void beSigned(const class Bureaucrat &b);
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_reqGradeSign;
		const int			_reqGradeExec;
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif
