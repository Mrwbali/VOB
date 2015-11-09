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

void Charon::setPosition(POSITION data)
{
	aposition = data;
}