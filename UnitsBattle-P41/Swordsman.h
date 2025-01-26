#pragma once
#include "Unit.h"

class Swordsman : public Unit
{
private:
	unsigned int power;
public:
	Swordsman();
	void Attack(Unit& enemy) override;
};

