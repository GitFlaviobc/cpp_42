/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* PresidentialPardonForm.hpp                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:02 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 14:38:13 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		// -Constructors
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);

		// -Destructors
		virtual ~PresidentialPardonForm(void);

		// -Operators
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

		// -Getters
		const std::string	&getTarget(void) const;

		// -Methods
		void	execute(const Bureaucrat &executor) const;
};

#endif
