/**
* @author Samuel Hall
* @date 02/18/2018
* @file Barbarian.hpp
* @brief Barbarian interface
*/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"
#include "Die.hpp"
#include "utilityFunctions.hpp"
#include <vector>

/**
* A Barbarian object contains information related to a barbarian
*/
class Barbarian : public Character {

private:
	/**
	* Inventory
	*/
	std::vector<Character*> mInventory;

public:
	Barbarian(std::string);
	~Barbarian();
	int attack();
	int defense();
	void applyPotion();
	void addItem(Character*);
	void inventoryMenu();
	void degradeStrength();
	std::vector<Character*> getInventory();
};


#endif // BARBARIAN_HPP




