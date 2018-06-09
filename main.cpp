/**
* @author Samuel Hall
* @date 02/03/2018
* @brief Description: A Barbarian in Hell
*/

#include <iostream>
#include <string>
#include <ctime>
#include "Map.hpp"
//#include "Menu.hpp"

int main() {

	srand(time(NULL));
	int answer;

	Map map;
	
	std::cout
		<< " Welcome to BARBARIAN: A text based game in which a Babarian is thrown"			<< std::endl
		<< " into the depths of Hell and must find the portal back to Earth. But beware,"	<< std::endl
		<< " as Hell's armies have just noticed your arrival and plan on feeding your"		<< std::endl
		<< " soul to the damned." << std::endl;
	/*std::cout 
		<< "                            ,-.                            " << std::endl
		<< "       ___,---.__          /'|`\          __,---,___       " << std::endl
		<< "    ,-'    \`    `-.____,-'  |  `-.____,-'    //    `-.    " << std::endl
		<< "  ,'        |           ~'\     /`~           |        `.  " << std::endl
		<< " /      ___//              `. ,'          ,  , \___      \ " << std::endl
		<< "|    ,-'   `-.__   _         |        ,    __,-'   `-.    |" << std::endl
		<< "|   /          /\_  `   .    |    ,      _/\          \   |" << std::endl
		<< "\  |           \ \`-.___ \   |   / ___,-'/ /           |  /" << std::endl
		<< " \  \           | `._   `\\  |  //'   _,' |           /  / " << std::endl
		<< "  `-.\         /'  _ `---'' , . ``---' _  `\         /,-'  " << std::endl
		<< "     ``       /     \    ,='/ \`=.    /     \       ''     " << std::endl
		<< "             |__   /|\_,--.,-.--,--._/|\   __|             " << std::endl
		<< "             /  `./  \\`\ |  |  | /,//' \,'  \             " << std::endl
		<< "            /   /     ||--+--|--+-/-|     \   \            " << std::endl
		<< "           |   |     /'\_\_\ | /_/_/`\     |   |           " << std::endl
		<< "            \   \__, \_     `~'     _/ .__/   /            " << std::endl
		<< "             `-._,-'   `-._______,-'   `-._,-'             " << std::endl;*/

	std::cout << "Begin?" << std::endl;
	std::cout << "1: Yes" << std::endl;
	std::cout << "2: No" << std::endl;
	answer = getInt(1, 2);
	if (answer == 1) {
		map.traverseMap();
	}

	return 0;
}