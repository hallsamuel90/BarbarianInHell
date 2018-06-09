/**
* @author Samuel Hall
* @date 02/18/2018
* @file Character.hpp
* @brief Character interface
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Die.hpp"

/**
* An Character object contains information relate to a character
*/
class Character {

protected:

	/**
	* Strength of character
	*/
	int mStrength;

	/**
	* Armor of character
	*/
	int mArmor;

	/**
	* Type of character
	*/
	std::string mCharType;

	/**
	* Name of character
	*/
	std::string mCharName;

	/**
	* Die 1
	*/
	Die* mDie1;

	/**
	* Die 2
	*/
	Die* mDie2;

public:
	Character();
	virtual ~Character();
	virtual int attack();
	virtual int defense();
	virtual void receiveAttack(int);
	virtual int getStrength();
	virtual int getArmor();
	virtual std::string getCharType();
	virtual std::string getCharName();
	virtual bool checkStrength();
	virtual void setStrength(int);
};


#endif // CHARACTER_HPP




