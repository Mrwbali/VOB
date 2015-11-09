#include "World.h"
#include <iostream>



World::World()
{	
	this->charon = Charon(Charon::WEST);

	this->goat = Cargo(Cargo::GOAT);

	this->wolf = Cargo(Cargo::WOLF);

	this->cabbage = Cargo(Cargo::CABBAGE);
}


World::~World()
{
}

void World::getState()
{	
	cout << charon.getPosition();
	cout << goat.getPosition();
	wolf.setPosition(Cargo::WEST);
	cout << wolf.getPosition();
	cout << cabbage.getPosition();
	cin;
}