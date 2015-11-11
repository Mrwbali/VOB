#include "Cargo.h"


Cargo::Cargo()
{
}

Cargo::Cargo(SPECIE spec, POSITION position)
{
	setSpecie(spec);
	setPosition(position);
}

string Cargo::getSpecie() const
{
	switch (aspec)
	{
	case Cargo::GOAT:
		return "GOAT";
		break;
	case Cargo::WOLF:
		return "WOLF";
		break;
	case Cargo::CABBAGE:
		return "CABBAGE";
		break;
	default:
		return to_string(aspec);
		break;
	}
}
	

void Cargo::setSpecie(SPECIE spec)
{
	aspec = spec;
}

string Cargo::getPosition() const
{
	switch (this->aposition)
	{
	case Charon::WEST:
		return "WEST";
		break;
	case Charon::EAST:
		return "EAST";
		break;
	default:
		return to_string(aposition);
		break;
	}
}

void Cargo::setPosition(POSITION pos)
{
	this->aposition = pos;
}

void Cargo::changePosition()
{
	if (this->aposition == Charon::WEST)
		this->setPosition(Charon::EAST);
	else
		this->setPosition(Charon::WEST);
}

Cargo::~Cargo()
{
}
