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
	int GoblinSpawnCount = rand() % 3 + 1;
	vector<Monster*> Monsters;
	for (int i = 0; i < GoblinSpawnCount; i++)
	{
		Monsters.push_back(new Goblin);
	}

	int SlimeSpawnCount = rand() % 3 + 1;
	for (int i = 0; i < SlimeSpawnCount; i++)
	{
		Monsters.push_back(new Slime);
	}

	int BoarSpawnCount = rand() % 3 + 1;
	for (int i = 0; i < BoarSpawnCount; i++)
	{
		Monsters.push_back(new Boar);
	}

	cout << '\n' << "------------------" << '\n' << endl;

	// movement of the created monsters -> Tick in UE
	for (int i = 0; i < Monsters.size(); i++)
	{
		Monsters[i]->Move();
	}

	cout << '\n' << "------------------" << '\n' << endl;

	// destroy the created monsters
	for (int i = 0; i < Monsters.size(); i++)
	{
		delete Monsters[i];
	}

	delete MyPlayer;
	MyPlayer = nullptr;
	
	return 0;
}