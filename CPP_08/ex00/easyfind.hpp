/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* easyfind.hpp                                          :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/10 11:09:00 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/10 11:48:32 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <list>
#include <vector>
#include <string>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end()) {
		throw std::out_of_range(std::string("Value not found in the given range"));
	}
	return (iter);
}

#endif
