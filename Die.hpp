/**
* @author Samuel Hall
* @date 01/23/2018
* @file Die.hpp
* @brief Die interface
*/

#ifndef DIE_HPP
#define DIE_HPP

/**
* A Die object contains information relate to a single Die
*/
class Die {

protected:

	/**
	* Number of sides on individual die
	*/
	int mN;

public:
	Die(int);
	virtual int roll();
	void printSides();
};


#endif // DIE_HPP

