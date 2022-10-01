/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Brain.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/29 17:50:44 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 12:44:37 by Flavio BC       ###        #########   ########          */
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
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);

		const std::string	&getIdeas(int const &i) const;
		void		setIdeas(int const &i, std::string &Ideas);

	private:
		std::string	_ideas[100];
};

std::ostream &operator<<(std::ostream &out, Brain const &in);

#endif