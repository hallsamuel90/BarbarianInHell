/**
* @author Samuel Hall
* @date 03/20/2018
* @file Minion.hpp
* @brief Minion interface
*/

#ifndef MINION_HPP
#define MINION_HPP

#include "Character.hpp"
#include "Die.hpp"

/**
* A Minion object contains information related to a Minion
*/
class Minion : public Character {

public:
	Minion(std::string);
	~Minion();
	int attack();
	int defense();
};


#endif // MINION_HPP




