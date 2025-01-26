#include "Archer.h"
#include "Bow.h"
#include <iostream>

Archer::Archer()
	: Unit(100, "Archer", Bow()), arrows(10)
{
}

void Archer::Attack(Unit& enemy)
{
	if (arrows > 0)
	{
		arrows--;
		int damage = enemy.TakeDamage(weapon.GetDamage());
		std::cout << "Archer: " << name << " Attack: " << enemy.GetName() << " Damage: (" << damage << ")" << std::endl;
		if (enemy.IsDead())
		{
			arrows += 5;
			std::cout << enemy.GetName() << " is dead" << std::endl;
		}
	}
	else {
		std::cout << "Archer: " << name << " No arrows" << std::endl;
	}
}
