#pragma once
class Actor
{
public:
	Actor();
	virtual ~Actor();

	int Hp;
	int Gold;

	// pure virtual function
	virtual void Move() = 0;
	virtual int Attack() = 0;
};

