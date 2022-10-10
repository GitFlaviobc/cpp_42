/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* whatever.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/09 13:58:01 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/09 16:33:03 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
const T &min(const T &a, const T &b) {
	return ((a < b) ? a : b);
}

template <typename T>
const T &max(const T &a, const T &b) {
	return ((a > b) ? a : b);
}

template <typename T>
void swap(T &a, T &b) {
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

#endif
