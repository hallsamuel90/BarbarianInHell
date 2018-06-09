/**
* @author Samuel Hall
* @date 03/10/2018
* @brief Description: Helper functions
*/

#include <iostream>
#include <sstream>
#include <string>
#include "utilityFunctions.hpp"

/**
* Gets integer and checks for valid inputs
*/
int getInt(int lowerBounds, int upperBounds) {

	//works cited: http://www.cplusplus.com/forum/beginner/58833/

	std::string input;
	int answer;

	while (1) {
		std::getline(std::cin, input);
		std::stringstream convert(input);

		if ((convert >> answer) && !(convert >> input) && (answer >= lowerBounds) && (answer <= upperBounds)) {
			return answer;
		}

		std::cin.clear();
		std::cout << "Input must be an integer between " << lowerBounds << " and " << upperBounds << ". Please try again... " << std::endl;
	}
}