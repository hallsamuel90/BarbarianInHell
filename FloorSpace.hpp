/**
* @author Samuel Hall
* @date 03/19/2018
* @file FloorSpace.hpp
* @brief FloorSpace interface
*/

#ifndef FLOOR_SPACE_HPP
#define FLOOR_SPACE_HPP

#include <iostream>
#include "Space.hpp"
class FloorSpace : public Space{

public:
	FloorSpace();
	~FloorSpace();
	Character* getData();
};

#endif // FLOOR_SPACE_HPP

