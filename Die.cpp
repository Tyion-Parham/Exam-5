#include <ctime>
#include <string>
#include "Die.h"

Die::Die():
SIDES(6)
{
	roll();
}

Die::Die(int sides):
SIDES(sides)
{
	roll();
}

void Die::roll()
{
	faceValue = rand() % SIDES + 1;
}

void Die::setFaceValue(int fv)
{
	faceValue = fv;
}

int Die::getFaceValue()
{
	return faceValue;
}

string Die::dieToString()
{
	string result = "A " + to_string(SIDES) + "-sided Die showing a " + to_string(faceValue);
	return result;
}

ostream& operator<<(ostream& strm, Die& d)
{
	strm << d.dieToString();
	return strm;
}