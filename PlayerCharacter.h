#pragma once
#include <string>
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
	PlayerCharacter(int MaxHp, int MaxMp, int Gold);
	~PlayerCharacter();
	void Movement();
	int Attack();
	void Pickup();
};

