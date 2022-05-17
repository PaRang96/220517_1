#pragma once
#include <string>
#include <iostream>
#include "Actor.h"
using namespace std;

class Monster
	:public Actor
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
	virtual int Attack();
};

