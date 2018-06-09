/**
* @author Samuel Hall
* @date 03/20/2018
* @file Overlord.hpp
* @brief Overlord interface
*/

#ifndef OVERLORD_HPP
#define OVERLORD_HPP

#include "Character.hpp"
#include "Die.hpp"

/**
* A Overlord object contains information related to a Overlord
*/
class Overlord : public Character {

public:
	Overlord(std::string);
	~Overlord();
	int attack();
	int defense();
};


#endif // OVERLORD_HPP




