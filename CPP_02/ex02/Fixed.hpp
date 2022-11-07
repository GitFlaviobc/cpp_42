/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:51 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/22 17:00:40 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		// -Constructors
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &src);

		// -Destructor
		~Fixed(void);

		// -Operators
		Fixed &operator=(Fixed const &src);

		bool operator>(Fixed const &src) const;
		bool operator<(Fixed const &src) const;
		bool operator>=(Fixed const &src) const;
		bool operator<=(Fixed const &src) const;
		bool operator==(Fixed const &src) const;
		bool operator!=(Fixed const &src) const;

		Fixed operator+(Fixed const &src) const;
		Fixed operator-(Fixed const &src) const;
		Fixed operator*(Fixed const &src) const;
		Fixed operator/(Fixed const &src) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static Fixed const &max(Fixed const &lhs, Fixed const &rhs);

		// -Getters
		int		getRawBits(void) const;

		// -Setters
		void	setRawBits(int const raw);

		// -Methods
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_rawValue;
		static const int	_fractBit;
};

// -Functions
std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif
