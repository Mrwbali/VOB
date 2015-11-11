// VKZ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "World.h"
#include <iostream>




int _tmain(int argc, _TCHAR* argv[])
{	

	World world = World();
	world.printState();
	cout << world.getGameStatus();
	return 0;
}

