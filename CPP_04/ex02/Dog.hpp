/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.hpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:20:36 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
		// -Constructors
		Dog(void);
		Dog(Dog const &rhs);

		// -Destructors
		virtual	~Dog(void);

		// -Operators
		Dog &operator=(Dog const &rhs);

		// -Getters
		Brain const	*getBrain(void) const;

		// -Methods
		void	makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif
