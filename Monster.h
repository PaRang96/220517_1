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
	virtual int Death();
	virtual void Move();
	virtual void Drop();
	virtual void Attack();
};

