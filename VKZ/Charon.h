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

	Charon();

	Charon(POSITION data);

	string getPosition() const;

	void setPosition(POSITION);

	virtual void changePosition();

	~Charon();
};

