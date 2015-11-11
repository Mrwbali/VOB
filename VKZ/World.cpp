#include "World.h"




World::World()
{	
	this->rules = Rules();

	this->charon = Charon(Charon::WEST);

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
	cout << left << setw(8) << setfill(' ') << "Carrier" << charon.getPosition();
	
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