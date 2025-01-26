#pragma once
#include "Unit.h"

class Mage : public Unit
{
protected:
	int mana;
public:
	Mage();
	void Attack(Unit& enemy) override;
};

