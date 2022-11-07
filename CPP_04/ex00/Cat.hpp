/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.hpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:39 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:30:02 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		// -Constructors
		Cat(void);
		Cat(Cat const &rhs);

		// -Destructors
		virtual	~Cat(void);

		// -Operators
		Cat &operator=(Cat const &rhs);

		// -Methods
		void	makeSound(void) const;
};

#endif
