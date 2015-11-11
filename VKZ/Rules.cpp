#include "Rules.h"


Rules::Rules()
{
}

int Rules::applyRule(vector<Cargo> cargos, Charon charon)
{
	for (auto &carg : cargos)
	{
		for (auto car : cargos)
		{
			if (carg.getSpecie() == "WOLF" && carg.getPosition() == car.getPosition() && carg.getPosition() != charon.getPosition() && car.getSpecie() == "GOAT")
			{
				return 2;
			}

			else if (carg.getSpecie() == "GOAT" && carg.getPosition() == car.getPosition() && carg.getPosition() != charon.getPosition() && car.getSpecie() == "CABBAGE")
			{
				return 2;
			}
		}
	}
	if (cargos.at(0).getPosition() == cargos.at(1).getPosition() && cargos.at(1).getPosition() == cargos.at(2).getPosition() && cargos.at(2).getPosition() == "WEST")
	{
		return 0;
	}
	else
	return 1;
}

Rules::~Rules()
{
}
