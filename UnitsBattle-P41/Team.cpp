#include "Team.h"

bool Team::isFirst = true;

Unit& Team::GetRandomTarget(Team& targets)
{
	int rand_index;
	do
	{
		rand_index = rand() % targets.units.size();
	} while (targets.units[rand_index]->IsDead());

	return *targets.units[rand_index];
}

Team::Team()
	: name("NoName")
{
	if (isFirst)
	{
		isFirst = false;
		srand(time(0));
	}
}

//Team::Team(std::initializer_list<const Unit&> list)
//	: Team()
//{
//	Unit* const * begin = list.begin();
//	for (size_t i = 0; i < list.size(); i++)
//	{
//		units.push_back(*begin);
//	}
//}

void Team::SetName(const std::string& value)
{
	name = value;
}

const std::string& Team::GetName() const
{
	return name;
}

void Team::Append(const Unit& unit)
{
	units.push_back(const_cast<Unit*>(&unit));
}

void Team::Attack(Team& enemies)
{
	for (size_t i = 0; i < units.size(); i++)
	{
		if (enemies.IsDead())
			break;
		auto& target = GetRandomTarget(enemies);
		units[i]->Attack(target);
		//if (target.IsDead())
		//	enemies.units.erase(enemies.units.cbegin() + i);
	}
}

bool Team::IsDead() const
{
	bool flag = true;
	for (size_t i = 0; i < units.size(); i++)
	{
		if (!units[i]->IsDead())
		{
			flag = false;
			break;
		}
	}
	return flag;
}

void Team::Defense()
{
	for (size_t i = 0; i < units.size(); i++)
	{
		units[i]->Defense();
	}
}

int Team::Size() const
{
	return units.size();
}

int Team::aLive() const
{
	int count = 0;
	for (size_t i = 0; i < units.size(); i++)
	{
		if (!units[i]->IsDead())
			count++;
	}
	return count;
}
