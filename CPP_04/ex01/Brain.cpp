/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* Brain.cpp                                             :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/29 17:50:41 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/25 09:54:50 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "Brain.hpp"

// -Constructors
Brain::Brain(void) {
	std::cout << "Brain default constructor called\n";
	std::stringstream	ss;
	std::string			id_idea;
	for (int i = 0; i < 100; i++) {
		ss << i << " ";
		ss >> id_idea;
		this->_ideas[i] = "idea: " + id_idea;
	}
	return ;
}

Brain::Brain(Brain const &rhs) {
	std::cout << "Brain copy constructor called\n";
	*this = rhs;
	return ;
}

// -Destructors
Brain::~Brain(void) {
	std::cout << "Brain default destructor called\n";
	return ;
}

// -Operators
Brain &Brain::operator=(Brain const &rhs) {
	std::cout << "Brain assigment operator called\n";
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs.getIdeas(i);
		}
	}
	return (*this);
}

// -Getters
const std::string &Brain::getIdeas(int const &i) const {
	return (this->_ideas[i]);
}

// -Setters
void Brain::setIdeas(int const &i, std::string &Ideas) {
	this->_ideas[i] = Ideas;
}

// -Functions
std::ostream &operator<<(std::ostream &out, Brain const &in) {
	for (int i = 0; i < 100; i++) {
		out << in.getIdeas(i) << "\n";
	}
	return (out);
}
