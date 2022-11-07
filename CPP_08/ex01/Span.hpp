/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Span.hpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/10 11:52:05 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/26 14:03:27 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		// -Constructors
		Span(void);
		Span(const size_t Nmax);
		Span(Span const &rhs);

		// -Destructor
		~Span(void);

		// -Operators
		Span &operator=(Span const &rhs);

		// -Getters
		const std::vector<int>	&getVector(void) const;
		const size_t			&getNint(void) const;

		// -Methods
		void	addNumber(int number);
		size_t	shortestSpan(void);
		size_t	longestSpan(void);
		void	addMax(int min, int max);

		// -Exceptions
		class MaxElementsReached : public std::exception {
			public:
				const char* what(void) const throw();
		};

		class MoreElementsNeeded : public std::exception {
			public:
				const char* what(void) const throw();
		};

	private:
		std::vector<int>	_vector;
		size_t				_Nint;
};

#endif
