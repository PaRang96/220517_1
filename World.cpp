#include "World.h"
#include "Actor.h"
#include "PlayerCharacter.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"

World::World()
{
	//Init();
}

World::~World()
{
	WorldTerm();
}

void World::Init()
{
	MyActor.push_back(new PlayerCharacter);
	MyActor.push_back(new Goblin);
	MyActor.push_back(new Slime);
	MyActor.push_back(new Boar);
}

void World::Tick()
{
	for (int i = 0; i < MyActor.size(); i++)
	{
		MyActor[i]->Move();
	}
}

void World::Render()
{
}

void World::WorldTerm()
{
	for (int i = 0; i < MyActor.size(); i++)
	{
		delete MyActor[i];
	}
}
