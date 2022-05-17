#pragma once
#include <string>
#include "PlayerCharacter.h"
using namespace std;

class Monster
{
private:
	string MonsterName;
	int Hp;
	int Gold;

public:
	Monster();
	~Monster();
	int Death(PlayerCharacter& PlayerCharacter, int Gold);
};

