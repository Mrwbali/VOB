// VKZ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "World.h"
#include <iostream>


string command = "";

int _tmain(int argc, _TCHAR* argv[])
{	

	World world = World();
	world.printState();
	cout << "HELP: sail *what* (goat, cabbage, wolf, alone)" << endl;
	while (world.getGameStatus() == 1)
	{	
		cout << "sail ";
		cin >> command;
		command.append("");
		if (world.sail(command))
		{
			world.printState();
		}
		else if (command == "sail")
		{
			cout << "Wrong command!" << endl;
			world.printState();
		}
	}
	
	if (world.getGameStatus() == 2){
		cout << "YOU LOSE!!" << endl;
	}
	else
	cout << "CONGRATULATIONS" << endl;
	cin >> command;
	return 0;
}

