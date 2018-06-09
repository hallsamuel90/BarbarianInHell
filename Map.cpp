/**
* @author Samuel Hall
* @date 03/19/2018
* @file Space.cpp
* @brief This file contains the Space class methods
*/
#include "Map.hpp"


/**
* Construct a new Map object
*/
Map::Map(){
	
	mStart = new FloorSpace();
	minion = new MonsterSpace(new Minion(" "));
	potion1 = new ItemSpace(new Potion(" "));
	floor2 = new FloorSpace();
	overlord = new MonsterSpace(new Overlord(" "));
	floor3 = new FloorSpace();
	potion2 = new ItemSpace(new Potion(" "));
	portal = new ItemSpace(new Portal(" "));
	
	mStart->setRight(minion);
	minion->setUp(potion1);
	potion1->setUp(floor2);
	floor2->setUp(overlord);
	overlord->setRight(floor3);
	floor3->setUp(potion2);
	potion2->setRight(portal);

	mPlayer = new Barbarian("Barb");
	mBoss = new Lucifer("Lucifer");
	mCurrentLocation = NULL;

}

/**
* A Space object contains information related to a sing space
*/
Map::~Map(){
	
	delete mStart;
	delete minion;
	delete potion1;
	delete floor2;
	delete overlord;
	delete floor3;
	delete potion2;
	delete portal;
	delete mPlayer;
	delete mBoss;
	
	mStart = NULL;
	minion = NULL;
	potion1 = NULL;
	floor2 = NULL;
	overlord = NULL;
	floor3 = NULL;
	potion2 = NULL;
	portal = NULL;


}

/**
* Prints the map from the start position
*/
void Map::printMap(){

	Space *tmp = mStart;
	std::cout << "###########################" << std::endl;
	std::cout << "PRINTING MAP" << std::endl;
	std::cout << "###########################" << std::endl;
	while (true) {
		
		if (mCurrentLocation == tmp) {
			std::cout << "BARBARIAN" << std::endl;
		}
		else {
			std::cout << tmp->getName() << std::endl;
		}
		if (tmp->getUp() != NULL) {
			tmp = tmp->getUp();
		}
		else if (tmp->getDown() != NULL) {
			tmp = tmp->getDown();
		}
		else if (tmp->getLeft() != NULL) {
			tmp = tmp->getLeft();
		}
		else if (tmp->getRight() != NULL) {
			tmp = tmp->getRight();
		}
		else {
			break;
		}
	}
	std::cout << "###########################" << std::endl;
	std::cout << '\n' << std::endl;
	
	tmp = NULL;
}

/**
* The player traverses the map
*/
void Map::traverseMap() {

	int answer;
	GAME_FLAG = true;
	Space *tmp = mStart;
	mCurrentLocation = tmp;


	while (GAME_FLAG) {

		printMap();
		//degrade strength
		mPlayer->degradeStrength();
		//if dead game over
		if (mPlayer->getStrength() < 0) {
			
			GAME_FLAG = false;
			std::cout << "YOU HAVE DIED" << std::endl;
			std::cout << "GAME OVER" << std::endl;
			tmp = NULL;
			break;
		}

		//only prompt is at least 1 item in inventory
		if (!mPlayer->getInventory().empty()) {
			//use item?
			std::cout << "Use Item?" << std::endl;
			std::cout << "1: Yes" << std::endl;
			std::cout << "2: No" << std::endl;
			answer = getInt(1, 2);

			if (answer == 1) {
				mPlayer->inventoryMenu();
				std::cout << "Item used" << std::endl;
			}
			else if (answer == 2) {
				std::cout << "Item NOT used" << std::endl;
			}
		}

		if (tmp->getUp() != NULL) {
			tmp = tmp->getUp();
			mCurrentLocation = tmp;
			checkSpace();
			if (GAME_FLAG == false) {
				tmp = NULL;
				break;
			}
		}
		else if (tmp->getDown() != NULL) {
			tmp = tmp->getDown();
			mCurrentLocation = tmp;
			checkSpace();
			if (GAME_FLAG == false) {
				tmp = NULL;
				break;
			}
		}
		else if (tmp->getLeft() != NULL) {
			tmp = tmp->getLeft();
			mCurrentLocation = tmp;
			checkSpace();
			if (GAME_FLAG == false) {
				tmp = NULL;
				break;
			}
		}
		else if (tmp->getRight() != NULL) {
			tmp = tmp->getRight();
			mCurrentLocation = tmp;
			checkSpace();
			if (GAME_FLAG == false) {
				tmp = NULL;
				break;
			}
		}
		else {
			tmp = NULL;
			break;
		}
	}
}

/**
* Determines how the player interacts with space
*/
void Map::checkSpace() {
	
	int answer;
	if (mCurrentLocation->getName() == "Monster") {
		//combat
		std::cout << "MONSTER FOUND" << std::endl;
		//Fight or Flee (50% chance still have to fight)
		std::cout << "Fight or Flee (50% chance you will fight anyway)" << std::endl;
		std::cout << "1: Fight" << std::endl;
		std::cout << "2: Flee" << std::endl;
		answer = getInt(1, 2);

		if (answer == 1) {
			combat(mPlayer, mCurrentLocation->getData());
		}
		else if (answer == 2) {
			answer = rand() % 2 + 1;
			if (answer == 1) {
				std::cout << "THE ENEMY HAS CAUGHT YOU" << std::endl;
				combat(mPlayer, mCurrentLocation->getData());
			}
			else if (answer == 2) {
				std::cout << "YOU FLED" << std::endl;
			}
		}
	}
	else if (mCurrentLocation->getName() == "Item") {
		//Portal Found? Game Over?
		if (mCurrentLocation->getData()->getCharType() == "Portal") {
			//TODO Combat with boss to win
			std::cout << "YOU HAVE FOUND THE PORTAL!!!, but wait.... what.. what.. is that!??????" << std::endl;
			std::cout << "AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH" << std::endl;
			combat(mPlayer, mBoss);
			std::cout << "YOU HAVE DEFEATED ALL THAT HELL COULD MUSTER" << std::endl;
			std::cout << "YOU WON!!!" << std::endl;
			GAME_FLAG = false;
		}
		else {
			//pick up item?
			std::cout << "ITEM FOUND" << std::endl;
			std::cout << "Pick up item?" << std::endl;
			std::cout << "1: Yes" << std::endl;
			std::cout << "2: No" << std::endl;
			answer = getInt(1, 2);

			if (answer == 1) {
				mPlayer->addItem(mCurrentLocation->getData());
				std::cout << "Item added to inventory" << std::endl;
			}
			else if (answer == 2) {
				std::cout << "Item NOT added to inventory" << std::endl;
			}
		}
	}
}

/**
* Simulates combat
*/
void Map::combat(Character* player, Character* monster) {

	while (true) {

		//round
		//player 1 attacks
		combatRound(player, monster);
		if (monster->checkStrength()) {
			std::cout << monster->getCharType() << " has lost..." << std::endl;
			break;
		}
		//player 2 attacks
		combatRound(monster, player);
		if (player->checkStrength()) {
			std::cout << player->getCharType() << " has lost..." << std::endl;
			break;
		}
	}
}

/**
* Implements the combat and prints stats of round
*/
void Map::combatRound(Character* attacker, Character* defender) {

	int attackPoints = attacker->attack();
	int defensePoints = defender->defense();
	int inflictedDamage = attackPoints - defensePoints - defender->getArmor();

	if (inflictedDamage < 0) {

		inflictedDamage = 0;

	}

	std::cout << "Attacker Type: " << attacker->getCharType() << std::endl;
	std::cout << "Defender Type: " << defender->getCharType() << std::endl;
	std::cout << defender->getCharType() << "'s Armor: " << defender->getArmor() << std::endl;
	std::cout << defender->getCharType() << "'s Strength Points : " << defender->getStrength() << std::endl;
	std::cout << attacker->getCharType() << "'s attack dice roll: " << attackPoints << std::endl;
	std::cout << defender->getCharType() << "'s defense dice roll: " << defensePoints << std::endl;
	std::cout << "Inflicted damage: " << inflictedDamage << std::endl;
	defender->receiveAttack(inflictedDamage);
	std::cout << defender->getCharType() << "'s new strength points: " << defender->getStrength() << std::endl;

}

