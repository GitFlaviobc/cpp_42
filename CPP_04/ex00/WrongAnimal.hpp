/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* WrongAnimal.hpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/28 16:22:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/28 16:44:37 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string const type);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &src);

		void makeSound(void) const;
		
		const std::string	&getType(void) const;
		void		setType(std::string type);
	protected:
		std::string	_type;

};

std::ostream &operator<<(std::ostream &out, WrongAnimal const &in);

#endif