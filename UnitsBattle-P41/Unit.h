#pragma once
#include <iostream>
#include "Weapon.h"

class Unit
{
protected:
	int HP;
	Weapon& weapon;
	unsigned int speed;
	std::string name;
	bool IsInDefense;
	int armor;
public:
	void SetHP(int value);
	int GetHP() const;
	const std::string& GetName() const;
	Unit(int HP, const std::string& name, const Weapon& weapon);
	virtual void Attack(Unit& enemy) = 0;
	virtual int TakeDamage(int value);
	bool IsDead() const;
	virtual void Defense();
	virtual void Print();
};