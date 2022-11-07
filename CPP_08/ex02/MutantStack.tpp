/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* MutantStack.tpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/11 16:09:02 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/31 14:42:27 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

// -Constructors
template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &rhs) : std::stack<T>() {
	*this = rhs;
	return ;
}

// -Destructor
template <typename T>
MutantStack<T>::~MutantStack(void) {
	return ;
}

// -Operators
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &rhs) {
	if (this != &rhs) {
		this->c = rhs.c;
	}
	return (*this);
}

// -Iterators
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void) const {
	return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void) const {
	return (this->c.cend());
}

#endif
