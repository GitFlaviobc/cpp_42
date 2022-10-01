/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Dog.hpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:45 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 14:18:37 by Flavio BC       ###        #########   ########          */
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
		Dog(void);
		virtual ~Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &src);

		void makeSound(void) const;
		Brain const *getBrain(void) const;
	private:
		Brain *_brain;
};

#endif
