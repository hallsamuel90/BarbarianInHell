/**
* @author Samuel Hall
* @date 01/23/2018
* @file Die.cpp
* @brief This file contains the Die class methods
*/

#include <ctime>
#include <iostream>
#include "Die.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Die object
* @param mN - number of sides of a single die
*/
Die::Die(int N) {

	mN = N;
}

/**
* Returns random integer between 1 and N simulating die roll
*/
int Die::roll() {

	int result;
	//srand(time(NULL));

	result = rand() % mN + 1;

	//std::cout << "Die Roll" << std::endl;
	return result;
}

/**
* Prints number of sides of die
*/
void Die::printSides() {

	std::cout << mN << std::endl;
}
