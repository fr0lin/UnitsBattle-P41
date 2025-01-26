#include <iostream>
#include "Swordsman.h"
#include "Team.h"
#include "Archer.h"
#include "Bow.h"
#include "Battle.h"
#include "Mage.h"

int main()
{
	Team team1;
	team1.Append(Swordsman());
	team1.Append(Mage());
	team1.Append(Archer());
	team1.SetName("Team 2");

	Team team2;
	team2.Append(Archer());
	team2.Append(Mage());
	team2.Append(Archer());
	team2.SetName("Team 1");
	
	Battle battle1;
	battle1.Append(team1);
	battle1.Append(team2);
	battle1.Start();

	return 0;
}