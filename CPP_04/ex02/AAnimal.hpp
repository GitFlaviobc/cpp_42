/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AAnimal.hpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/01 14:31:13 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(std::string const type);
		virtual ~AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &src);

		const std::string	&getType(void) const;
		void		setType(std::string type);

		/* pure virtual function makes abstract class "virtual", "= 0"
		** no need to implement the function, 
		** whatever class uses this AA class will have to implement this function
		*/
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &out, AAnimal const &in);

#endif