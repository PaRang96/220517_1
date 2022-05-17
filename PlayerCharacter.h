#pragma once
#include <string>
#include "Monster.h"
using namespace std;

class PlayerCharacter
{
private:
	string PlayerName;
	int MaxHp;
	int CurrentHp;
	int MaxMp;
	int CurrentMp;
	int XCoord;
	int YCoord;
	int Damage;
	int Gold;

public:
	PlayerCharacter();
	~PlayerCharacter();
	void Movement();
	int Attack(int damage, Monster& Monster);
	void Pickup();
};

