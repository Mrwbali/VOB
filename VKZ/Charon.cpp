#include "Charon.h"


Charon::Charon(POSITION data)
{
	Charon::setPosition(data);
}


Charon::~Charon()
{
}

Charon::Charon()
{
}

string Charon::getPosition() const
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

void Charon::changePosition()
{
	if (this->aposition == Charon::WEST)
		this->setPosition(Charon::EAST);
	else
		this->setPosition(Charon::WEST);
}

void Charon::setPosition(POSITION data)
{
	aposition = data;
}