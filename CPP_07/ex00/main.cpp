/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/09 16:47:49 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) {
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
