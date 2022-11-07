/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Intern.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 17:32:05 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 08:25:09 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
	public:
		// -Constructors
		Intern(void);
		Intern(Intern const &rhs);

		// -Destructors
		~Intern(void);

		// -Operators
		Intern &operator=(Intern const &rhs);

		// -Methods
		AForm	*shrubberyCreationForm(const std::string target) const;
		AForm	*robotomyRequestForm(const std::string target) const;
		AForm	*presidentialPardonForm(const std::string target) const;
		AForm	*invalidForm(const std::string target) const;
		AForm	*makeForm(const std::string name, const std::string target);

		// -Exceptions
		class NoMatchException : public std::exception {
		public:
			const char *what(void) const throw();
		};
};

// -Typedef
//typedef ReturnType (Class::(typedef name))(ParameterTypes...)
typedef	AForm* (Intern::*t_forms)(const std::string) const;

#endif
