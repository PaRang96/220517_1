#pragma once
#include "Monster.h"
class Slime :
    public Monster
{
public:
    Slime();
    virtual ~Slime();
    void Move() override;
};

