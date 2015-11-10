#pragma once
#include "Charon.h"

using namespace std;


class Cargo : 
		public Charon
{
public:

	enum SPECIE
	{
		GOAT,
		WOLF,
		CABBAGE
	};

private:

	SPECIE aspec;

	POSITION aposition;

public:
	
	Cargo();

	Cargo(SPECIE spec, POSITION position);

	string getSpecie() const;
		
	void setSpecie(SPECIE spec);
	
	string getPosition() const;

	void setPosition(POSITION pos);

	~Cargo();
};

