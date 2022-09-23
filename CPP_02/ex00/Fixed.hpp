/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:51 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/19 15:53:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &src);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw );
	private:
		int					_fixedValue;
		static const int	_fractBit;
};

#endif
