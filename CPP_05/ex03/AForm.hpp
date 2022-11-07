/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AForm.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/27 15:16:00 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	public:
		// -Constructors
		AForm(void);
		AForm(const std::string name, const int reqGradeSign, const int reqGradeExec);
		AForm(AForm const &rhs);

		// -Destructors
		virtual ~AForm(void);

		// -Operators
		AForm &operator=(AForm const &rhs);

		// -Getters
		const std::string			&getName(void) const;
		bool						getIsSigned(void) const;
		int							getReqGradeSign(void) const;
		int							getReqGradeExec(void) const;
		virtual const std::string	&getTarget(void) const;

		// -Setters
		void	setTarget(std::string target);

		// -Methods
		void			beSigned(const class Bureaucrat &b);
		virtual void	execute(const class Bureaucrat& executor) const = 0;

		// -Exceptions
		class GradeTooHighException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		class FileOutputException : public std::exception {
		public:
			const char* what(void) const throw();
		};

		class UnsignedFormException : public std::exception {
		public:
			const char* what(void) const throw();
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_reqGradeSign;
		const int			_reqGradeExec;

	protected:
		const std::string	_target;
};

std::ostream &operator<<(std::ostream &out, AForm const &in);

#endif
