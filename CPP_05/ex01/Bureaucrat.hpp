/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Bureaucrat.hpp                                        :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/01 19:09:33 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/03 18:01:09 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);

		class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
		};
		
		const int	&getGrade(void) const;
		const std::string	&getName(void) const;

		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(const class Form &f) const;
	private:
		const std::string	_name;
		int			_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif