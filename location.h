#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
class location
{
	private:
		char ** board;
		int width;
		int height;
		int playerX;
		int playerY;

		//items that are bound to to map, don't go to another lvl
		int light = 0;
		int spareLight = 5;
		int spdPotions = 0;
		int dmgPotions = 0;
		int defPotions = 0;
		int hpPotions = 0;
		int gold = 0;

		//
		int objective = 5;

	
	public:
		location( char* mapFile);
		location(int width, int height, char* map); // add constructor with character
		~location();
		void useLight();

};

