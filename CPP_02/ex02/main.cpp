/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 18:13:58 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "[ PDF START ]\n" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << "\n[ PDF END ]" << std::endl;
	}
	{
		Fixed a(8);
		Fixed b(2);
		Fixed c(b);
		Fixed d;
		
		std::cout << "[ VALUES CHECK START ]\n" << std::endl;
		std::cout << "The a is: " << a << std::endl;
		std::cout << "The b is: " << b << std::endl;
		std::cout << "The c is: " << c << std::endl;
		std::cout << "The d is: " << d << std::endl;
		std::cout << "\n[ VALUES CHECK END ]" << std::endl;
		
		std::cout << "[ COMPARE START ]\n" << std::endl;
		std::cout << a << " == " << b << " ? " << std::boolalpha << (a == b) << std::endl;
		std::cout << b << " == " << c << " ? " << std::boolalpha << (b == c) << std::endl;
		std::cout << a << " == " << d << " ? " << std::boolalpha << (a == d) << std::endl << std::endl;

		std::cout << a << " != " << b << " ? " << std::boolalpha << (a != b) << std::endl;
		std::cout << b << " != " << c << " ? " << std::boolalpha << (b != c) << std::endl;
		std::cout << a << " != " << d << " ? " << std::boolalpha << (a != d) << std::endl << std::endl;
		
		std::cout << a << " > " << b << " ? " << std::boolalpha << (a > b) << std::endl;
		std::cout << b << " > " << c << " ? " << std::boolalpha << (b > c) << std::endl;
		std::cout << a << " > " << d << " ? " << std::boolalpha << (a > d) << std::endl << std::endl;

		std::cout << a << " < " << b << " ? " << std::boolalpha << (a < b) << std::endl;
		std::cout << b << " < " << c << " ? " << std::boolalpha << (b < c) << std::endl;
		std::cout << a << " < " << d << " ? " << std::boolalpha << (a < d) << std::endl << std::endl;

		std::cout << a << " >= " << b << " ? " << std::boolalpha << (a >= b) << std::endl;
		std::cout << b << " >= " << c << " ? " << std::boolalpha << (b >= c) << std::endl;
		std::cout << a << " >= " << d << " ? " << std::boolalpha << (a >= d) << std::endl << std::endl;

		std::cout << a << " <= " << b << " ? " << std::boolalpha << (a <= b) << std::endl;
		std::cout << b << " <= " << c << " ? " << std::boolalpha << (b <= c) << std::endl;
		std::cout << a << " <= " << d << " ? " << std::boolalpha << (a <= d) << std::endl;

		std::cout << "\n[ COMPARE END ]" << std::endl;
		
		std::cout << "[ ARITHMETIC START ]\n" << std::endl;
		std::cout << a << " + " << b << " = " << (a + b) << std::endl;
		std::cout << b << " + " << c << " = " << (b + c) << std::endl;
		std::cout << a << " + " << d << " = " << (a + d) << std::endl;
		std::cout << a << " + " << b << " + " << c << " + " << d << " = " << (a + b + c + d) << std::endl << std::endl;
		
		std::cout << a << " - " << b << " = " << (a - b) << std::endl;
		std::cout << b << " - " << c << " = " << (b - c) << std::endl;
		std::cout << a << " - " << d << " = " << (a - d) << std::endl;
		std::cout << a << " - " << b << " - " << c << " - " << d << " = " << (a - b - c - d) << std::endl << std::endl;

		std::cout << a << " * " << b << " = " << (a * b) << std::endl;
		std::cout << b << " * " << c << " = " << (b * c) << std::endl;
		std::cout << a << " * " << d << " = " << (a * d) << std::endl;
		std::cout << a << " * " << b << " * " << c << " * " << d << " = " << (a * b * c * d) << std::endl << std::endl;

		std::cout << a << " / " << b << " = " << (a / b) << std::endl;
		std::cout << b << " / " << c << " = " << (b / c) << std::endl;
		std::cout << d << " / " << a << " = " << (d / a) << std::endl;
		std::cout << a << " / " << b << " / " << c << " = " << (a / b / c) << std::endl;
		std::cout << "\n[ ARITHMETIC END ]" << std::endl;
		
		std::cout << "[ INCREMENT/DECREMENT START ]\n" << std::endl;
		std::cout << a << "++ = " << (a++) << std::endl;
		std::cout << "new a: " << a << std::endl << std::endl;
		std::cout << "++" << a << " = " << (++a) << std::endl;
		std::cout << "new a: " << a << std::endl << std::endl;
		std::cout << a << "-- = " << (a--) << std::endl;
		std::cout << "new a: " << a << std::endl << std::endl;
		std::cout << "--" << a << " = " << (--a) << std::endl;
		std::cout << "new a: " << a << std::endl;
		std::cout << "\n[ INCREMENT/DECREMENT END ]" << std::endl;
	
		std::cout << "[ MIN/MAX START ]\n" << std::endl;
		std::cout << "a = "<< a << " | b = " << b << std::endl;
		std::cout << "a b Min check:\n" << Fixed::min(a,b) << std::endl;
		std::cout << "a b Max check:\n" << Fixed::max(a,b) << std::endl;
		std::cout << "\n[ MIN/MAX END ]" << std::endl;
	}
	// {
	// 	std::cout << "\n\n\n\n [ ++X vs X++ ]\n";
	// 	Fixed a(8);
	// 	std::cout << "Lets do ++X\n";
	// 	std::cout << ++a << "\nNew a: " << a << "\n";
	// 	std::cout << "Lets do X++\n";
	// 	std::cout << a++ << "\nNew a: " << a << "\n";
	// }
	return (0);
}
