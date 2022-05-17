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
	int Damage;

public:
	Monster();
	~Monster();
	int Death(PlayerCharacter& PlayerCharacter, int Gold);
	void Move();
	void Drop();
	void Attack();
};

