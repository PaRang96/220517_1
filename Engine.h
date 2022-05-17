#pragma once
#include "World.h"
#include "CustomWorld.h"

class Engine
{
public:
	Engine();
	virtual ~Engine();

	World* MyWorld;

	void Run();
};

