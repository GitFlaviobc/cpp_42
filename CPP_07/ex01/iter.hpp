/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* iter.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/09 17:04:13 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/29 14:35:43 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *addr, size_t lenght, void (*f)(const T&)) {
	for (size_t i = 0; i < lenght; i++) {
		f(addr[i]);
	}
}

template <typename T>
void printIter(const T &x) {
	std::cout << x << " ";
}

#endif
