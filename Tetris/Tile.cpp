#include "Tile.h"

using namespace std;

void Tile::read()
{
	string line;
	std::ifstream inFile(filename);
	string content;

	if (inFile.is_open())
	{
		while ( getline (inFile,line) )
		{
			content += line;
		}
		inFile.close();
	 }

	vector<int> tableau = vector<int> (content.begin(), content.end());
	int i;
	for(i = 0; i < tableau.size(); i++)
		cout << " " << tableau[i];
}