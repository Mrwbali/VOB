#pragma once
#include <vector>
#include "Cargo.h"

using namespace std;

class Rules
{
public:

	Rules();

	int applyRule(vector<Cargo> cargos, Charon charon);
	
	virtual ~Rules();
};

