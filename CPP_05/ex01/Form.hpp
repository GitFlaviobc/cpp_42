/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Form.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 11:49:15 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {
	public:
		// -Constructors
		Form(void);
		Form(const std::string name, const int reqGradeSign, const int reqGradeExec);
		Form(Form const &rhs);

		// -Destructors
		~Form(void);

		// -Operators
		Form &operator=(Form const &rhs);

		// -Getters
		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		int					getReqGradeSign(void) const;
		int					getReqGradeExec(void) const;

		// -Methods
		void beSigned(const class Bureaucrat &b);

		// -Exceptions
		class GradeTooHighException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what(void) const throw();
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_reqGradeSign;
		const int			_reqGradeExec;
};

// -Functions
std::ostream &operator<<(std::ostream &out, Form const &in);

#endif
