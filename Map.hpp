/**
* @author Samuel Hall
* @date 03/19/2018
* @file Map.hpp
* @brief Map interface
*/

#ifndef MAP_HPP
#define MAP_HPP

#include <string>
#include "Space.hpp"
#include "MonsterSpace.hpp"
#include "ItemSpace.hpp"
#include "FloorSpace.hpp"
#include "Character.hpp"
#include "Barbarian.hpp"
#include "Portal.hpp"
#include "Overlord.hpp"
#include "Lucifer.hpp"
#include "utilityFunctions.hpp"


/**
* A Map object contains information related to the game map
*/
class Map{

private:
	
	/**
	* Start location on map
	*/
	Space* mStart;

	/**
	* Current location on map
	*/
	Space* mCurrentLocation;

	/**
	* Player
	*/
	Barbarian* mPlayer;

	/**
	* Final Boss
	*/
	Lucifer* mBoss;


	/**
	* Game Flag
	*/
	bool GAME_FLAG;

	Space* minion;
	Space* potion1;
	Space* floor2;
	Space* overlord;
	Space* floor3;
	Space* potion2;
	Space* portal;



public:
	Map();
	~Map();
	void printMap();
	void traverseMap();
	void checkSpace();
	void combat(Character*, Character*);
	void combatRound(Character*, Character*);
};

#endif // SPACE_HPP

