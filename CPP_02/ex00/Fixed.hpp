/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/21 18:18:33 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 16:59:48 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		// -Constructors
		Fixed(void);
		Fixed(Fixed const &rhs);

		// -Destructor
		~Fixed(void);
		
		// -Operators
		Fixed &operator=(Fixed const &rhs);

		// -Getters
		int		getRawBits( void ) const;

		// -Setters
		void	setRawBits(int const raw );

	private:
		int					_rawValue;
		static const int	_fractBit;
};

#endif
