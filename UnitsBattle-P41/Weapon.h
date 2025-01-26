#pragma once
#include <string>

enum Grade
{
	Common,
	Rare,
	Epic,
	Legendary,
	Mythic
};

class Weapon
{
protected:
	Grade grade;
	std::string name;
	unsigned int damage;
public:
	Weapon(unsigned int damage, const std::string& name, Grade grade);
	unsigned int GetDamage();
	virtual void UpGrade() = 0;
	Grade GetGrade();
};