#pragma once
#include "Unit.h"
class Archer :
    public Unit
{
private:
    unsigned int arrows;
public:
    Archer();
    void Attack(Unit& enemy) override;
};

