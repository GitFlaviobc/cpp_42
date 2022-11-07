/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Harl.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 18:57:30 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 21:26:41 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
	public:
		// -Constructor
		Harl(void);

		// -Destructor
		~Harl(void);

		// -Methods
		void	complain( std::string level );

	private:
		// -Methods
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
