#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Tile
{
public:
	Tile(void);

	void read();

private:
	std::string filename;
};

