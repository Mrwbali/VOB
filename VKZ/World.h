#pragma once
#include <string>
#include "Cargo.h"
#include "Charon.h"
#include "Rules.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class World
{

private:

	Charon charon;
	
	Cargo goat;
	
	Cargo wolf;
	
	Cargo cabbage;

	Rules rules;

	int gameStatus;
	
	vector<Cargo> cpositions;

public:
	
	World();

	void printState() const;

	int getGameStatus();

	Charon::POSITION getCharonPosition() const;

	virtual ~World();
};

