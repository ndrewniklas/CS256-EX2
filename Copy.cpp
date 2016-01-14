// Andrew NIklas
// Exercise 2
// Completed 1/13/2016

/*
 *  Created on: Jan 13, 2016
 *      Author: Andrew
 */

#include <iostream>
#include <fstream>
#include <string>

int main(){

	std::string copyFrm;
	std::string copyTo;
	std::string str;
	int counter = 0;

	std::cout << "Enter name of file to copy from: ";
	std::cin >>copyFrm;

	std::ifstream fin(copyFrm);

	std::cout << "Enter name of file to copy to: ";
	std::cin >> copyTo;

	std::ofstream fout(copyTo);

	if(fout){
		while(getline(fin,str)){
			counter += str.length();
			fout << str << std::endl;
		}
	}
	std::cout << "Copied " << counter << " characters." << std::endl;

	return 0;

}




