/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* whatever.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/09 13:58:01 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/29 14:33:12 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
const T &min(const T &a, const T &b) {
	// std::cout << "\n[ My min ]\n"; // Just to check the call
	return ((a < b) ? a : b);
}

template <typename T>
const T &max(const T &a, const T &b) {
	// std::cout << "\n[ My max ]\n";  // Just to check the call
	return ((a > b) ? a : b);
}

template <typename T>
void swap(T &a, T &b) {
	T	temp;

	// std::cout << "\n[ My Swap ]\n";  // Just to check the call
	temp = a;
	a = b;
	b = temp;
}

#endif
