#pragma once
#include <vector>
#include "Team.h"
#include <initializer_list>

class Battle
{
	struct BattleTeam
	{
		Team* team;
		int team_id;
		bool have_attack = true;
		int turns_count;
		BattleTeam(Team* team, int team_id, int turns_count);
		void Turn();
		bool CanTurn() const;
	};
private:
	std::vector<BattleTeam> teams;
	int max_teams;
	int max_turns_count;
	void Stop();
	BattleTeam& GetRandomTeam();
	void ResetAfterBattle();
	bool SomeoneHasAttack() const;
public:
	Battle();
	Battle(std::initializer_list<Team> list);
	void Append(const Team& team);
	void Start();
};