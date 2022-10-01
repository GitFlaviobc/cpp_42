/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Animal.hpp                                            :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 18:51:56 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string const type);
		virtual ~Animal(void);
		Animal(Animal const &src);
		Animal &operator=(Animal const &src);

		const std::string	&getType(void) const;
		void		setType(std::string type);

		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &out, Animal const &in);

#endif