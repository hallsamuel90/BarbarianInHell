/**
* @author Samuel Hall
* @date 02/19/2018
* @file Overlord.cpp
* @brief This file contains the Overlord class methods
*/

//#include <string>
#include <cstdlib>
#include <iostream>
#include "Overlord.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Overlord object
*/
Overlord::Overlord(std::string name) {

	mStrength = 20;
	mArmor = 2;
	mCharType = "Overlord";
	mCharName = name;
	mDie1 = new Die(6);

}

/**
* Destructs a Overlord object
*/
Overlord::~Overlord() {

	delete mDie1;
	mDie1 = NULL;

}


/**
* Returns the attack points of character
*/
int Overlord::attack() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}

/**
* Returns the defense points of character
*/
int Overlord::defense() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}