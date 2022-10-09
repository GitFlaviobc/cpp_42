/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/08 20:28:01 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main(void) {
	Data	data1("Marvin");

	// serialize
	uintptr_t	secret = serialize(&data1);
	uintptr_t	wtf = secret;

	// deserialize
	Data	*data2 = deserialize(secret);
	Data	*data3 = deserialize(wtf);

	// (Serialization/deserialization keep the same value inside data and same address)
	std::cout << "ADRESSES:" << "\n";
	std::cout << "----------------------------" << "\n";
	std::cout << "Data1 address: "<< &data1 << "\n";
	std::cout << "Data2 address: "<< &data2 << "\n";
	std::cout << "Data3 address: "<< &data3 << "\n";
	std::cout << "Secret address: "<< &secret << "\n";
	std::cout << "Wtf address: "<< &wtf << "\n";

	std::cout << "\nPOINT TO ADRESSES:" << "\n";
	std::cout << "----------------------------" << "\n";
	std::cout << "Data1 address: "<< &data1 << "\n";
	std::cout << "Data2 Point to: "<< data2 << "\n";
	std::cout << "Data3 Point to: "<< data3 << "\n";

	std::cout << "\nVALUES:" << "\n";
	std::cout << "----------------------------" << "\n";
	std::cout << "Data1 value: " << data1.getValue() << "\n";
	std::cout << "Data2 value: " << (*data2).getValue() << "\n";
	std::cout << "Data3 value: " << (*data3).getValue() << "\n";
	std::cout << "Secret value: "<< secret << "\n";
	std::cout << "Wtf value: "<< wtf << "\n";
	
	return (0);
}
