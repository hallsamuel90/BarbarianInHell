/**
* @author Samuel Hall
* @date 03/20/2018
* @file Potion.hpp
* @brief Potion interface
*/

#ifndef POTION_HPP
#define POTION_HPP

#include "Character.hpp"
#include "Die.hpp"

/**
* A Potion object contains information related to a Potion
*/
class Potion : public Character {

public:
	Potion(std::string);
	~Potion();
};


#endif // POTION_HPP





