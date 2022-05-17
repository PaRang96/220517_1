#pragma once
#include <string>
#include "Actor.h"
using namespace std;

class PlayerCharacter
	:public Actor
{
private:
	string PlayerName;
	int Mp;
	int Location;
	int Damage;

public:
	PlayerCharacter();
	PlayerCharacter(int MaxHp, int MaxMp, int Gold);
	~PlayerCharacter();
	void Pickup();
	int Attack() override;
	void Move() override;
};

