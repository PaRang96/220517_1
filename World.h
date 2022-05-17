#pragma once
#include <vector>
#include "Actor.h"
using namespace std;

class World
{
public:
	World();
	virtual ~World();
	
	// 3 basic functions of game engine
	virtual void Init();
	virtual void Tick();
	virtual void Render();

	vector<Actor*> MyActor;

	void WorldTerm();
};

