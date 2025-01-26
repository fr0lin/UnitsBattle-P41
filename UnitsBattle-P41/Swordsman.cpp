#include "Swordsman.h"
#include "Sword.h"

Swordsman::Swordsman()
	:Unit(100, "Swordsman", Sword()), power(5)
{
}

void Swordsman::Attack(Unit& enemy)
{
	int damage = enemy.TakeDamage(weapon.GetDamage());
	std::cout << "Swordsman: " << name << " Attack: " << enemy.GetName() << " Damage: (" << damage << ")" << std::endl;
	if (enemy.IsDead())
	{
		SetHP(HP + 25);
		std::cout << enemy.GetName() << " is dead" << std::endl;
	}
}