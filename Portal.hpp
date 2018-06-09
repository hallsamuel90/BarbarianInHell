/**
* @author Samuel Hall
* @date 03/20/2018
* @file Portal.hpp
* @brief Portal interface
*/

#ifndef PORTAL_HPP
#define PORTAL_HPP

#include "Character.hpp"
#include "Die.hpp"

/**
* A Portal object contains information related to a Portal
*/
class Portal : public Character {

public:
	Portal(std::string);
	~Portal();
};


#endif // PORTAL_HPP





