/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Intern.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 17:32:05 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/05 18:19:05 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);

		class NoMatchException : public std::exception {
		public:
			const char *what(void) const throw();
		};

		AForm *shrubberyCreationForm(const std::string target) const;
		AForm *robotomyRequestForm(const std::string target) const;
		AForm *presidentialPardonForm(const std::string target) const;
		AForm *invalidForm(const std::string target) const;
		AForm *makeForm(const std::string name, const std::string target);
};

#endif
