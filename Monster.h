#pragma once
#include <string>
#include <iostream>
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
	virtual ~Monster();
	int Death();
	virtual void Move();
	void Drop();
	void Attack();
};

