/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongAnimal.hpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:29:09 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		// -Constructors
		WrongAnimal(void);
		WrongAnimal(std::string const type);
		WrongAnimal(WrongAnimal const &rhs);

		// -Destructors
		virtual ~WrongAnimal(void);

		// -Operators
		WrongAnimal &operator=(WrongAnimal const &rhs);

		// -Getters
		const std::string	&getType(void) const;

		// -Setters
		void	setType(std::string type);
		
		// -Methods
		void	makeSound(void) const;

	protected:
		std::string	_type;

};

// -Functions
std::ostream &operator<<(std::ostream &out, WrongAnimal const &in);

#endif
