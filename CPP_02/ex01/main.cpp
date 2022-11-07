/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 16:43:04 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	{
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
	}
	std::cout << "\n\n [New scope]\n\n";
	Fixed a;
	a = Fixed( 1234.4321f );
	std::cout << "\n\n[ Fixed \"a\" Math, step by step]\n\n";
	std::cout << "[raw bit]\n";
	std::cout << "\"Mask\": " << (1 << 8) << "\n";
	std::cout << "Value: " << (1234.4321f * (1 << 8)) << "\n";
	std::cout << "Round Value: " << roundf(1234.4321f * (1 << 8)) << "\n";
	std::cout << "Save as int Value: " << static_cast<int>(roundf(1234.4321f * (1 << 8))) << "\n";
	std::cout << "Check raw: " << a.getRawBits() << "\n";

	std::cout << "\n[Float Value]\n";
	std::cout << "a \"Original\" Float transformed: " << a << " or " << a.toFloat() << "\n";
	std::cout << "It lost precision.\n";

	std::cout << "\n[Int Value]\n";
	std::cout << "a as int: " << a.toInt() << "\n";

	std::cout << "\n[ Fixed \"a\" toInt(), step by step]\n";
	std::cout << "Int value: " << (a.getRawBits() >> 8) << "\n";

	std::cout << "\n[ Fixed \"a\" toFloat(), step by step]\n";
	std::cout << "Float value: " << static_cast<float>(a.getRawBits()) / 256 << "\n";
	return (0);
}
