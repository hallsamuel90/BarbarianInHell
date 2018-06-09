/**
* @author Samuel Hall
* @date 03/19/2018
* @file Space.hpp
* @brief Space interface
*/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>
#include "Character.hpp"

/**
* A Space object contains information related to a sing space
*/
class Space{

protected: 
	
	/**
	* Pointers to other spaces
	*/
	Space *mUp;
	Space *mDown;
	Space *mLeft;
	Space *mRight;

	/**
	* Name of space
	*/
	std::string mName;

public:
	Space();
	~Space();
	virtual void setUp(Space*);
	virtual void setDown(Space*);
	virtual void setLeft(Space*);
	virtual void setRight(Space*);
	virtual Space* getUp();
	virtual Space* getDown();
	virtual Space* getRight();
	virtual Space* getLeft();
	virtual std::string getName();
	virtual Character* getData() = 0;
};

#endif // SPACE_HPP