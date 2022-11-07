/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/18 18:04:34 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	std::ofstream			fileReplace;
	std::ifstream			fileOriginal;
	std::string				oldStr;
	std::string				newStr;
	std::string				line;
	std::string::size_type	pos;
	
	if (argc != 4) {
		std::cerr << "Error!\nPlease use 3 Arguments.\nExample:\n./sed FILENAME STRING1 STRING2\n";
		return (1);
	}
	fileOriginal.open(argv[1]);
	if (!fileOriginal) {
		std::cerr << "Error oppening Original file.\n";
		return (1);
	}
	fileReplace.open((std::string(argv[1]) + ".replace").c_str());
	if (!fileReplace) {
		std::cerr << "Error oppening Replace file.\n";
		return (1);
	}
	oldStr = std::string(argv[2]);
	newStr = std::string(argv[3]);
	while (std::getline(fileOriginal, line)) {
		pos = line.find(oldStr.c_str(),0, oldStr.length());
		while(pos != std::string::npos) {
			line.erase(pos, oldStr.length());
			line.insert(pos, newStr);
			pos += newStr.length();
			pos = line.find(oldStr.c_str(),pos, oldStr.length());
		}
		fileReplace << line << "\n";
	}
	fileReplace.close();
	fileOriginal.close();
	return (0);
}
