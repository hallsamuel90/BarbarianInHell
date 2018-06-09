/**
* @author Samuel Hall
* @date 03/20/2018
* @file Lucifer.hpp
* @brief Lucifer interface
*/

#ifndef LUCIFER_HPP
#define LUCIFER_HPP

#include "Character.hpp"
#include "Die.hpp"

/**
* A Lucifer object contains information related to a Lucifer
*/
class Lucifer : public Character {

public:
	Lucifer(std::string);
	~Lucifer();
	int attack();
	int defense();
};


#endif // LUCIFER_HPP




