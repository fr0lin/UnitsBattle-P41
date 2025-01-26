#include <iostream>
#include "Swordsman.h"
#include "Team.h"
#include "Archer.h"
#include "Bow.h"
#include "Battle.h"

/*const Weapon& c_ref = Bow();

Weapon& ref = const_cast<Weapon&>(c_ref);

std::cout << ref.GetDamage() << std::endl;
ref.UpGrade();
std::cout << ref.GetDamage() << std::endl;*/

int main()
{

	Team team1;
	team1.Append(Swordsman());
	team1.Append(Swordsman());
	team1.Append(Swordsman());
	team1.SetName("Swordsman Team");

	Team team2;
	team2.Append(Archer());
	team2.Append(Archer());
	team2.Append(Archer());
	team2.SetName("Archer Team");
	
	Battle battle1 = { team1 , team2 };
	battle1.Start();

	return 0;
}