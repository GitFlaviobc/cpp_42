/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/20 16:45:30 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
