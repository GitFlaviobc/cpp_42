/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Animal.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:46:41 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		// -Constructors
		Animal(void);
		Animal(std::string const type);
		Animal(Animal const &rhs);
		
		// -Destructors
		virtual	~Animal(void);

		// -Operators
		Animal &operator=(Animal const &rhs);

		// -Getters
		const std::string	&getType(void) const;

		// -Setter
		void	setType(std::string type);

		// -Methods
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

// -Functions
std::ostream &operator<<(std::ostream &out, Animal const &in);

#endif
