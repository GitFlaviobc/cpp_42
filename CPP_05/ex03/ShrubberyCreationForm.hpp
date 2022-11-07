/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* ShrubberyCreationForm.hpp                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 14:37:15 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		// -Constructors
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);

		// -Destructors
		virtual ~ShrubberyCreationForm(void);

		// -Operators
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		// -Getters
		const std::string	&getTarget(void) const;

		// -Methods
		void	execute(const Bureaucrat &executor) const;
};

#endif
