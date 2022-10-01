/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Cat.hpp                                               :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:39 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 13:52:27 by Flavio BC       ###        #########   ########          */
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
		Cat(void);
		virtual ~Cat(void);
		Cat(Cat const &src);
		Cat &operator=(Cat const &src);

		void makeSound(void) const;
		Brain const *getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
