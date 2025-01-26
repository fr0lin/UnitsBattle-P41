#pragma once
#include "Unit.h"

class Mage : public Unit
{
protected:
	int mana;
public:
	Mage();
	Mage(const Mage& other);
	void Attack(Unit& enemy) override;
	virtual Unit* clone() const override;
};