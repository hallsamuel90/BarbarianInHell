/**
* @author Samuel Hall
* @date 02/19/2018
* @file Minion.cpp
* @brief This file contains the Minion class methods
*/

//#include <string>
#include <cstdlib>
#include <iostream>
#include "Minion.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Minion object
*/
Minion::Minion(std::string name) {

	mStrength = 10;
	mArmor = 0;
	mCharType = "Minion";
	mCharName = name;
	mDie1 = new Die(6);

}

/**
* Destructs a Barbarian object
*/
Minion::~Minion() {

	delete mDie1;

}


/**
* Returns the attack points of character
*/
int Minion::attack() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}

/**
* Returns the defense points of character
*/
int Minion::defense() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}