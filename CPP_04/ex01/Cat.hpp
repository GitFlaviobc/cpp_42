/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.hpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:39 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:48:38 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		// -Constructors
		Cat(void);
		Cat(Cat const &rhs);

		// -Destructors
		virtual	~Cat(void);

		// -Operators
		Cat &operator=(Cat const &rhs);

		// -Getters
		Brain const	*getBrain(void) const;

		// -Methods
		void	makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif
