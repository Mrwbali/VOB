#pragma once
#include <string>
#include "Cargo.h"
using namespace std;

class World
{
private:

	Charon charon;
	
	Cargo goat;
	
	Cargo wolf;
	
	Cargo cabbage;

public:

	void getState();
	
	World();
	
	virtual ~World();
};

