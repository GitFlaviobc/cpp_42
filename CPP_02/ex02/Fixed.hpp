/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Fixed.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 20:10:51 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:49:48 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(Fixed const &src);

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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fixedValue;
		static const int	_fractBit;
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif
