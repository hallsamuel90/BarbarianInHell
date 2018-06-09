/**
* @author Samuel Hall
* @date 02/19/2018
* @file Lucifer.cpp
* @brief This file contains the Lucifer class methods
*/

//#include <string>
#include <cstdlib>
#include <iostream>
#include "Lucifer.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Lucifer object
*/
Lucifer::Lucifer(std::string name) {

	mStrength = 40;
	mArmor = 3;
	mCharType = "Lucifer";
	mCharName = name;
	mDie1 = new Die(6);

}

/**
* Destructs a Lucifer object
*/
Lucifer::~Lucifer() {

	delete mDie1;
	mDie1 = NULL;

}


/**
* Returns the attack points of character
*/
int Lucifer::attack() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}

/**
* Returns the defense points of character
*/
int Lucifer::defense() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}