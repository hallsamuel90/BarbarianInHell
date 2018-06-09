/**
* @author Samuel Hall
* @date 03/19/2018
* @file ItemSpace.hpp
* @brief ItemSpace interface
*/

#ifndef ITEM_SPACE_HPP
#define ITEM_SPACE_HPP

#include <iostream>
#include "Space.hpp"
#include "Potion.hpp"

class ItemSpace : public Space{

private:

	Character* mItem;
public:
	ItemSpace(Character*);
	~ItemSpace();
	Character* getData();
};

#endif // ITEM_SPACE_HPP

