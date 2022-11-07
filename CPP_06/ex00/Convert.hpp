/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Convert.hpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/07 10:31:22 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/26 10:21:41 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert {
	public:
		// -Constructors
		Convert(void);
		Convert(const std::string input);
		Convert(Convert const &rhs);

		// -Destructor
		~Convert(void);

		// -Operators
		Convert &operator=(Convert const &rhs);

		// -Getters
		const double		&getNumberinput(void) const;
		const std::string	&getInput(void) const;

		// -Methods
		std::string	printChar(void) const;
		std::string	printInt(void) const;
		std::string	printFloat(void) const;
		std::string	printDouble(void) const;

	private:
		std::string	_input;
		double		_numberInput;

		// -Methods
		char		toChar(void) const;
		int			toInt(void) const;
		float		toFloat(void) const;
		double		toDouble(void) const;
};

#endif
