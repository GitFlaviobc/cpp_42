/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* AAnimal.hpp                                           :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/25 16:23:32 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 10:35:59 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		// -Constructors
		AAnimal(void);
		AAnimal(std::string const type);
		AAnimal(AAnimal const &rhs);
		
		// -Destructors
		virtual	~AAnimal(void);

		// -Operators
		AAnimal &operator=(AAnimal const &rhs);

		// -Getters
		const std::string	&getType(void) const;

		// -Setter
		void	setType(std::string type);

		// -Methods
		/* pure virtual function makes abstract class "virtual", "= 0"
		** no need to implement the function, 
		** whichever class uses this AA class will have to implement this function
		*/
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &out, AAnimal const &in);

#endif
