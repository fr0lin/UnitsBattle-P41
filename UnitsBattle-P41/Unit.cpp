#include "Unit.h"
#include <iostream>

void Unit::SetHP(int value)
{
	HP = value > 100 ? 100 : value < 0 ? 0 : value;
}

int Unit::GetHP() const
{
	return HP;
}

const std::string& Unit::GetName() const
{
	return name;
}

Unit::Unit(int HP, const std::string& name, const Weapon& weapon)
	:HP(HP), name(name), weapon(const_cast<Weapon&>(weapon)), IsInDefense(false), armor(5)
{}

//void Unit::Attack(Unit& enemy)
//{
//	int damage = enemy.TakeDamage(weapon.GetDamage());
//	std::cout << "Unit " << name << " Attack " << enemy.name << "Damage: (" << damage << ")" << std::endl;
//	if (enemy.IsDead())
//	{
//		std::cout << enemy.GetName() << " is dead" << std::endl;
//	}
//}

int Unit::TakeDamage(int value)
{
	int true_damage = IsInDefense ? value - armor : value;
	HP = HP - true_damage < 0 ? 0 : HP - true_damage;
	return true_damage;
}

bool Unit::IsDead() const
{
	return HP <= 0;
}

void Unit::Defense()
{
	IsInDefense = !IsInDefense;
}

void Unit::Print()
{
	std::cout << "Unit " << name << std::endl;
}
