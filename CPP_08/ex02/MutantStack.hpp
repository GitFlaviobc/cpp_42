/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* MutantStack.hpp                                       :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/11 16:08:59 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/31 14:52:32 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		// -Typedef Iterators
		typedef typename MutantStack<T>::stack::container_type::iterator				iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator			const_iterator;

		// -Constructors
		MutantStack<T>(void);
		MutantStack<T>(MutantStack<T> const &rhs);

		// -Destructor
		~MutantStack<T>(void);

		// -Operators
		MutantStack<T> &operator=(MutantStack<T> const &rhs);

		// -Iterators
		iterator				begin(void);
		iterator				end(void);
		const_iterator			cbegin(void) const;
		const_iterator			cend(void) const;
};

// -TPP Template Implementation
#include "MutantStack.tpp"

#endif
