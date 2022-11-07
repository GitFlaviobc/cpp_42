/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Base.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/09 08:59:25 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/28 13:53:23 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
	public:
		virtual ~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

// -Functions
Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

// -TypeDef
typedef Base*	t_funct(void);

#endif
