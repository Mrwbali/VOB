#include "World.h"
#include <iostream>
#include <iomanip>



World::World()
{	
	this->charon = Charon(Charon::WEST);

	this->goat = Cargo(Cargo::GOAT, Charon::EAST);

	this->wolf = Cargo(Cargo::WOLF, Charon::EAST);

	this->cabbage = Cargo(Cargo::CABBAGE, Charon::EAST);
}


World::~World()
{
}

void World::getState()
{	
	cout << left << setw(8) << setfill(' ') << "Carrier" << charon.getPosition();
	cout << left << setw(8) << setfill(' ') << goat.getSpecie() << goat.getPosition();
	cout << left << setw(8) << setfill(' ') << wolf.getSpecie() << wolf.getPosition();
	cout << left << setw(8) << setfill(' ') << cabbage.getSpecie() << cabbage.getPosition();
	cin;
}