#pragma once
#include <string>
#include "PlayerCharacter.h"
using namespace std;

class Monster
{
	string MonsterName;
	int Hp;
	int Gold;

	Monster();
	~Monster();
	int Death(PlayerCharacter& PlayerCharacter, int Gold);
};

