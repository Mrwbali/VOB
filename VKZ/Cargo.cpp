#include "Cargo.h"


Cargo::Cargo()
{
}

Cargo::Cargo(SPECIE spec)
{
	setSpecie(spec);
	setPosition(EAST);
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
		return "WEST \n";
		break;
	case Charon::EAST:
		return "EAST \n";
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

Cargo::~Cargo()
{
}
