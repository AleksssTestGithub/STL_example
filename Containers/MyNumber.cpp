#include "MyNumber.h"



MyNumber::MyNumber()
{
	x = 0;
}

int MyNumber::getNumber() const
{
	return x;
}

MyNumber::MyNumber(int a)
{
	x = a;
}


MyNumber::~MyNumber()
{
}
