/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Bureaucrat.hpp                                        :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/01 19:09:33 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 11:01:56 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		// -Constructors
		Bureaucrat(void);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(Bureaucrat const &rhs);

		// -Destructors
		~Bureaucrat(void);

		// -Operators
		Bureaucrat &operator=(Bureaucrat const &rhs);

		// -Getters
		const int	&getGrade(void) const;

		// -Setters
		const std::string	&getName(void) const;

		// -Methods
		void	incrementGrade(void);
		void	decrementGrade(void);

		// -Exceptions
		class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
		};

	private:
		const std::string	_name;
		int					_grade;
};

// -Functions
std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif
