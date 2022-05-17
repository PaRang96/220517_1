#include "CustomWorld.h"
#include "PlayerCharacter.h"
#include "Goblin.h"

CustomWorld::CustomWorld()
{
}

CustomWorld::~CustomWorld()
{
}

void CustomWorld::Init()
{
	MyActor.push_back(new PlayerCharacter);
	MyActor.push_back(new Goblin);
}
