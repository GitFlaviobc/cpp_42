/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Array.hpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/10/10 10:02:13 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/26 14:02:26 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		// -Constructors
		Array<T>(void) : _size(0), _ptr(NULL) {
			return ;
		}

		Array<T>(unsigned int n) : _size(n), _ptr(NULL) {
			if (this->_size) {
				this->_ptr = new T[this->_size];
			}
			return ;
		}

		Array<T>(Array const &rhs) : _size(rhs.size()), _ptr(NULL) {
			if (this->_size) {
				this->_ptr = new T[this->_size];
			}
			return ;
		}

		// -Destructor
		~Array<T>(void) {
			if (this->_size) {
				delete [] this->_ptr;
			}
			this->_ptr = NULL;
			return ;
		}

		// -Operators
		Array<T> &operator=(Array const &rhs) {
			if (this != &rhs) {
				if (this->_size) {
					delete this->_ptr;
				}
				this->_size = rhs.size();
				if (this->_size) {
					this->_ptr = new T[this->_size];
				}
				for (size_t i = 0; i < this->_size; i++) {
					this->_ptr[i] = rhs[i];
				}
			}
			return (*this);
		}

		T &operator[](int i) {
			if (i < 0 || i >= static_cast<int>(this->_size)) {
				throw std::out_of_range("Index out of range!\n");
			}
			return (this->_ptr[i]);
		}

		const T &operator[](int i) const {
			if (i < 0 || i >= static_cast<int>(this->_size)) {
				throw std::out_of_range("Index out of range!\n");
			}
			return (this->_ptr[i]);
		}

		// -Methods
		size_t size(void) const {
			return (this->_size);
		}

	private:
		size_t	_size;
		T		*_ptr;
};

// -Functions
template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &in) {
	for (size_t i = 0; i < in.size() - 1; i++) {
		std::cout << in[i] << " ";
	}
	std::cout << in[in.size() - 1] << "\n";
	return (out);
}

#endif
