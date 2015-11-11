#include "World.h"




World::World()
{	
	this->rules = Rules();

	this->charon = Charon(Charon::EAST);

	this->goat = Cargo(Cargo::GOAT, Charon::EAST);

	this->wolf = Cargo(Cargo::WOLF, Charon::EAST);

	this->cabbage = Cargo(Cargo::CABBAGE, Charon::EAST);

	cpositions.push_back(goat);

	cpositions.push_back(wolf);

	cpositions.push_back(cabbage);

	gameStatus = 0;
}

World::~World()
{
}

void World::printState() const
{	
	cout << left << setw(8) << setfill(' ') << "Carrier" << charon.getPosition() << endl;
	
	for each  (Cargo bu in cpositions)
	{
		cout << left << setw(8) << setfill(' ') << bu.getSpecie() << bu.getPosition() << endl;
	}

	cin;
}

int World::getGameStatus()
{
	gameStatus = rules.applyRule(cpositions,charon);
	return gameStatus;
}

bool World::sail(string what)
{
	if (what == "goat" && cpositions.at(0).getPosition() == charon.getPosition())
	{
		cpositions.at(0).changePosition();
		charon.changePosition();
		return true;
	}
	else if (what == "wolf" && cpositions.at(1).getPosition() == charon.getPosition())
	{
		cpositions.at(1).changePosition();
		charon.changePosition();
		return true;
	}
	else if (what == "cabbage" && cpositions.at(2).getPosition() == charon.getPosition())
	{
		cpositions.at(2).changePosition();
		charon.changePosition();
		return true;
	}
	else if (what == "alone")
	{
		charon.changePosition();
		return true;
	}
	else 
		return false;
}