/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Data.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/08 19:08:25 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/08 20:26:06 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {
	public:
		// -Constructors
		Data(void);
		Data(const std::string value);
		Data(Data const &rhs);

		// -Operators
		Data &operator=(Data const &rhs);

		// -Destructor
		~Data(void);

		// -Getters
		const std::string	&getValue(void) const;

	private:
		std::string	_value;
};

// -Functions
uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
