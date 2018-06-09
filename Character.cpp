/**
* @author Samuel Hall
* @date 02/19/2018
* @file Character.cpp
* @brief This file contains the Character class methods
*/

#include <cstdlib>
#include <iostream>
#include "Character.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Character object
*/
Character::Character() {

	mStrength = 0;
	mArmor = 0;
	mCharType = "NONE";
	mCharName = "NONE";
	mDie1 = NULL;
	mDie2 = NULL;

}

/**
* Destrcuts a Character object
*/
Character::~Character() {

	mDie1 = NULL;
	mDie2 = NULL;

}

/**
* Returns the attack points of a character
*/
int Character::attack() {

	return 0;

}

/**
* Returns the defense points of a character
*/
int Character::defense() {

	return 0;

}

/**
* Receives the attack of another character
*/
void Character::receiveAttack(int attack) {

	mStrength = mStrength - attack;

}

/**
* Returns the strength of the character
*/
int Character::getStrength() {

	return mStrength;

}

/**
* Returns the armor of the character
*/
int Character::getArmor() {

	return mArmor;

}

/**
* Returns the type of the character
*/
std::string Character::getCharType() {

	return mCharType;

}

/**
* Returns the name of the character
*/
std::string Character::getCharName() {

	return mCharName;

}

/**
* Checks the strength of a character to see if he/she is dead
*/
bool Character::checkStrength() {
	
	bool status = false;

	if (mStrength <= 0) {
		status = true;
	}

	return status;
}

/**
* Recovers a percentage of characters strenght if the character won a round
*/
void Character::setStrength(int strength) {

	mStrength = strength;
}

