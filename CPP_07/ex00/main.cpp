/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/29 14:32:42 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) {
	std::cout << "\n------------------PDF------------------\n";
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "\n------------------PDF END------------------\n";
	}
	std::cout << "\n------------------INT MIN - MAX------------------\n";
	{
		int	a = 5;
		int	b = 10;

		std::cout << "The min<int> of " << a << " and " << b << ":\n" << min<int>(a,b) << "\n";
		std::cout << "\nThe min of " << a << " and " << b << ":\n" << min(a,b) << "\n";
		std::cout << "\nThe max<int> of " << a << " and " << b << ":\n" << max<int>(a,b) << "\n";
		std::cout << "\nThe max of " << a << " and " << b << ":\n" << max(a,b) << "\n";
	}
	std::cout << "\n------------------CHAR MIN - MAX------------------\n";
	{
		char	a = 'A';
		char	b = 'L';

		std::cout << "The min<char> of " << a << " and " << b << ":\n" << min<char>(a,b) << "\n";
		std::cout << "\nThe min of " << a << " and " << b << ":\n" << min(a,b) << "\n";
		std::cout << "\nThe max<char> of " << a << " and " << b << ":\n" << max<char>(a,b) << "\n";
		std::cout << "\nThe max of " << a << " and " << b << ":\n" << max(a,b) << "\n";
	}
	std::cout << "\n------------------SWAP------------------\n";
	{
		char	a = 'A';
		char	b = 'L';

		std::cout << "A: " << a << "\nB: " << b << "\n-SWAP-";
		swap<char>(a,b);
		std::cout << "\nA: " << a << "\nB: " << b << "\n";
	}
	{
		std::string	a = "Marvin";
		std::string	b = "Cadet";

		std::cout << "A: " << a << "\nB: " << b << "\n-SWAP-";
		/* swap<std::string>(a,b); Will cause conflit with "std:: swap() Template"
		   use swap(a,b) or
		   ::swap<std::string>(a,b)
		*/
		::swap<std::string>(a,b);
		std::cout << "\nA: " << a << "\nB: " << b << "\n";
	}
	{
		int	a = 42;
		int	b = 0;

		std::cout << "A: " << a << "\nB: " << b << "\n-SWAP-";
		swap<int>(a,b);
		std::cout << "\nA: " << a << "\nB: " << b << "\n";
	}
	return (0);
}
