#pragma once
#include <string>
#include "Monster.h"
using namespace std;

class PlayerCharacter
{
	string PlayerName;
	int MaxHp;
	int CurrentHp;
	int MaxMp;
	int CurrentMp;
	int XCoord;
	int YCoord;
	int Damage;

	PlayerCharacter();
	~PlayerCharacter();
	void Movement(int x, int y);
	int Attack(int damage, Monster& Monster);
};

