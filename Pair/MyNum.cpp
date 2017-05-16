#include "MyNum.h"

MyNum::MyNum(int x)
{
	this->x = x;
}

int MyNum::getX() const
{
	return this->x;
}

bool MyNum::operator==(const MyNum & r) const
{
	return this->getX() == r.getX();
}

bool MyNum::operator<(const MyNum & r) const
{
	return this->getX()<r.getX();
}


MyNum::~MyNum()
{
}
