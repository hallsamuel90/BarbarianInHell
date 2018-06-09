/**
* @author Samuel Hall
* @date 03/19/2018
* @file Space.hpp
* @brief Space interface
*/

#ifndef MONSTER_SPACE_HPP
#define MONSTER_SPACE_HPP

#include "Space.hpp"
#include "Character.hpp"
#include "Minion.hpp"

class MonsterSpace : public Space{

private:
	
	Character* mMonster;

public:
	MonsterSpace(Character*);
	~MonsterSpace();
	Character* getData();
};

#endif // MONSTER_SPACE_HPP
