#include <iostream>
#include "PlayerCharacter.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <time.h>
#include <string>
#include <vector>		// container STL, Standard Template Library
using namespace std;

int main()
{
	PlayerCharacter* MyPlayer = new PlayerCharacter(100, 100, 100);

	srand(static_cast<unsigned int>(time(nullptr)));
	
	// random number of instances (1 ~ 3)
	vector<Monster*> Monsters;
	Monsters.push_back(new Goblin);
	Monsters.push_back(new Slime);
	Monsters.push_back(new Boar);
	Monsters.push_back(new Boar);

	cout << "---------------------------" << endl;

	for (int i = 0; i < Monsters.size(); i++)
	{
		delete Monsters[i];
	}

	delete MyPlayer;
	MyPlayer = nullptr;
	
	return 0;
}