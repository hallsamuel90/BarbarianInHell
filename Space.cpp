/**
* @author Samuel Hall
* @date 03/19/2018
* @file Space.cpp
* @brief This file contains the Space class methods
*/

#include "Space.hpp"

/**
* Constructs a new Space object
*/
Space::Space(){

	mUp = NULL;
	mDown = NULL;
	mLeft = NULL;
	mRight = NULL;

	mName = "Space";
}

/**
* Destructs a Space object
*/
Space::~Space(){
	mUp = NULL;
	mDown = NULL;
	mLeft = NULL;
	mRight = NULL;
}

/**
* Adds a space to the up position
*/
void Space::setUp(Space *up){

	mUp = up;
}

/**
* Adds a space to the down position
*/
void Space::setDown(Space *down) {

	mDown = down;
}

/**
* Adds a space to the left position
*/
void Space::setLeft(Space *left) {

	mLeft = left;
}

/**
* Adds a space to the right position
*/
void Space::setRight(Space *right) {

	mRight = right;
}

/**
* Returns the pointer to the up position
*/
Space* Space::getUp() {

	return mUp;
}

/**
* Returns the pointer to the down position
*/
Space* Space::getDown() {

	return mDown;
}

/**
* Returns the pointer to the left position
*/
Space* Space::getLeft() {

	return mLeft;
}

/**
* Returns the pointer to the rigth position
*/
Space* Space::getRight() {

	return mRight;
}

/**
* Returns name of space
*/
std::string Space::getName() {

	return mName;
}
