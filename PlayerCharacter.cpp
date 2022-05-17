#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter()
{
}

PlayerCharacter::PlayerCharacter(int MaxHp, int MaxMp, int Gold)
{
	Hp = MaxHp;
	Mp = MaxMp;
	Gold = Gold;
}

PlayerCharacter::~PlayerCharacter()
{
}

void PlayerCharacter::Move()
{
}

int PlayerCharacter::Attack()
{
	return 0;
}

void PlayerCharacter::Pickup()
{
}
