/**
* @author Samuel Hall
* @date 03/19/2018
* @file MonsterSpace.cpp
* @brief This file contains the MonsterSpace class methods
*/

#include "MonsterSpace.hpp"


/**
* Constructs a new MonsterSpace object
*/
MonsterSpace::MonsterSpace(Character* monster){

	mName = "Monster";
	mMonster = monster;

}

/**
* Destructs a MonsterSpace object
*/
MonsterSpace::~MonsterSpace(){

	delete mMonster;
	mMonster = NULL;
}

/**
* Returns pointer to monster contained within
*/
Character* MonsterSpace::getData() {

	return mMonster;
}