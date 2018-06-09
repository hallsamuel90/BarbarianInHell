/**
* @author Samuel Hall
* @date 03/19/2018
* @file ItemSpace.cpp
* @brief This file contains the ItemSpace class methods
*/

#include "ItemSpace.hpp"

/**
* Constructs a new ItemSpace object
*/
ItemSpace::ItemSpace(Character* item){
	
	mName = "Item";
	mItem = item;
}

/**
* Destructs a ItemSpace object
*/
ItemSpace::~ItemSpace(){

	delete mItem;
	mItem = NULL;
}

/**
* Returns pointer to monster contained within
*/
Character* ItemSpace::getData() {

	return mItem;
}