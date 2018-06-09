/**
* @author Samuel Hall
* @date 02/19/2018
* @file Barbarian.cpp
* @brief This file contains the Character class methods
*/

//#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Barbarian.hpp"

//#define _CRTDBG_MAP_ALLOC
//#include<iostream>
//#include <crtdbg.h>
//#ifdef _DEBUG
//#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new DEBUG_NEW
//#endif 

/**
* Constructs a new Barbarian object
*/
Barbarian::Barbarian(std::string name) {

	mStrength = 100;
	mArmor = 30;
	mCharType = "Barbarian";
	mCharName = name;
	mDie1 = new Die(6);

}

/**
* Destructs a Barbarian object
*/
Barbarian::~Barbarian() {

	delete mDie1;
	mDie1 = NULL;

}


/**
* Returns the attack points of character
*/
int Barbarian::attack() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}

/**
* Returns the defense points of character
*/
int Barbarian::defense() {

	int sum = 0;
	sum = sum + mDie1->roll();
	sum = sum + mDie1->roll();

	return sum;

}

/**
* Restores 50% of player's health
*/
void Barbarian::applyPotion() {

	mStrength = mStrength + mStrength*(0.5);
	std::cout << "HEALTH RESTORED" << std::endl;
}

/**
* Adds item to player's inventory
*/
void Barbarian::addItem(Character* item) {

	//limit inventory to 10 items
	if (mInventory.size() < 10) {
		mInventory.push_back(item);
		std::cout << item->getCharType() << " Added" << std::endl;

	}
	else {
		std::cout << "Cannot add item, over burdened" << std::endl;
	}
}

/**
* Inventory Menu
*/
void Barbarian::inventoryMenu() {

	if (mInventory.empty()) {
		std::cout << "Inventory Empty" << std::endl;
	}
	else {
		int answer;

		//show menu
		for (int i = 0; i < mInventory.size(); i++) {
			std::cout << i + 1 << ": " << mInventory.at(i)->getCharType() << std::endl;
		}
		answer = getInt(1, mInventory.size());
		for (int i = 0; i < mInventory.size(); i++) {
			if (answer == i + 1) {
				if (mInventory.at(i)->getCharType() == "Potion") {
					applyPotion();
					//remove from inventory after consumption
					mInventory.erase(mInventory.begin() + i);
				}
			}
		}
	}
}

/**
* Inventory Menu
*/
void Barbarian::degradeStrength() {
mStrength = mStrength - mStrength*(0.2);
	std::cout << "HEALTH DEGRADED" << std::endl;
}

/**
* Returns Inventory
*/
std::vector<Character*> Barbarian::getInventory() {
	return mInventory;
}
