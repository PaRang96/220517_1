#include <iostream>
#include <time.h>
#include <string>
#include <vector>				// container STL, Standard Template Library
#include "PlayerCharacter.h"
#include "Monster.h"
#include "World.h"
#include "CustomWorld.h"
#include "Engine.h"
using namespace std;

int main()
{
	Engine* MyEngine = new Engine();

	MyEngine->Run();

	return 0;
}