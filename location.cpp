#include "stdafx.h"
#include "location.h"




location::location(char * mapFile)
{
	std::ifstream map(mapFile);
	map >> width >> height;
	std::string line;
	for(int i = 0; i < height;++i)
		if (std::getline(map, line))
		{
			
		}
}

location::~location()
{
}

void location::useLight()
{
}
