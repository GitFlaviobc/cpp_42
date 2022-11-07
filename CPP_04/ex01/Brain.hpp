/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Brain.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/29 17:50:44 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:53:34 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <string>

class Brain {
	public:
		// -Constructors
		Brain(void);
		Brain(Brain const &rhs);

		// -Destructors
		~Brain(void);

		// -Operators
		Brain &operator=(Brain const &rhs);

		// -Getters
		const std::string	&getIdeas(int const &i) const;

		// -Setters
		void	setIdeas(int const &i, std::string &Ideas);

	private:
		std::string	_ideas[100];
};

std::ostream &operator<<(std::ostream &out, Brain const &in);

#endif
