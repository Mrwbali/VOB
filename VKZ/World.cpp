#include "World.h"
#include <iostream>



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
	cout << "Carrier" << charon.getPosition();
	cout << goat.getSpecie()<< "   " << goat.getPosition();
	cout << wolf.getSpecie() << "   " << wolf.getPosition();
	cout << cabbage.getSpecie() << "   " << cabbage.getPosition();
	cin;
}