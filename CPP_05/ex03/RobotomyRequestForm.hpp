/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* RobotomyRequestForm.hpp                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/05 09:09:06 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 14:36:27 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		// -Constructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);

		// -Destructors
		virtual ~RobotomyRequestForm(void);

		// -Operators
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

		// -Getters
		const std::string	&getTarget(void) const;

		// -Methods
		void	execute(const class Bureaucrat &executor) const;
};

#endif
