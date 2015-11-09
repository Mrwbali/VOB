#pragma once
#include <string>

using namespace std;
class Charon
{
public:
	enum POSITION {
		WEST,
		EAST
	};

private:

	POSITION aposition;

public:
	
	string getPosition() const;
	void setPosition(POSITION);
	Charon(POSITION data);
	Charon();
	~Charon();
};

