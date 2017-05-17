#include "BetweenAB.h"



bool BetweenAB::operator()(int const & el)
{
	return el>a&&el<b;
}

BetweenAB::BetweenAB()
{
	a = 0;
	b = 0;
}

BetweenAB::BetweenAB(int _a, int _b): a(_a),b(_b)
{
}


BetweenAB::~BetweenAB()
{
}
