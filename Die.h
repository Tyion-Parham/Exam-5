#pragma once
#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <ostream>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES;
public:
	Die();
	Die(int sides);
	void roll();
	void setFaceValue(int fv);
	int getFaceValue();
	string dieToString();
	friend ostream& operator<<(ostream& strm, Die& d);
};

#endif // !DIE_H
