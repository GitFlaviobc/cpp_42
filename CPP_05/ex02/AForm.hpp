/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AForm.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/02 16:10:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 09:31:16 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm(void);
		AForm(const std::string name, const int reqGradeSign, const int reqGradeExec);
		virtual ~AForm(void);
		AForm(AForm const &src);
		AForm &operator=(AForm const &src);

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

		const std::string &getName(void) const;
		bool getIsSigned(void) const;
		virtual const std::string	&getTarget(void) const;
		void		setTarget(std::string target);
		
		int getReqGradeSign(void) const;
		int getReqGradeExec(void) const;
		void beSigned(const class Bureaucrat &b);

		virtual void execute(const class Bureaucrat& executor) const = 0;

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