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
	
	// create 1 Goblin, 1 Slime, and 2 Boars into vector container "Monsters"
	vector<Monster*> Monsters;
	Monsters.push_back(new Goblin);
	Monsters.push_back(new Slime);
	Monsters.push_back(new Boar);
	Monsters.push_back(new Boar);
	
	cout << "---------------------------" << endl;

	for (int i = 0; i < Monsters.size(); i++)
	{
		Monsters[i]->Move();
	}
	cout << "---------------------------" << endl;

	for (int i = 0; i < Monsters.size(); i++)
	{
		delete Monsters[i];
	}

	delete MyPlayer;
	MyPlayer = nullptr;
	
	return 0;
}