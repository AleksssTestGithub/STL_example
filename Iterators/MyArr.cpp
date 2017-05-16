#include "MyArr.h"



bool MyArr::operator!=(const MyArr & it)
{
	return p!=it.p;
}

bool MyArr::operator==(const MyArr & it)
{
	return p==it.p;
}

MyArr & MyArr::operator++()
{
	++p;
	return *this;
}

MyArr MyArr::operator++(int)
{
	MyArr tmp(*this);
	++p; //this->operator++();
	return tmp;
}

int const & MyArr::operator*()
{
	return *p;
}

MyArr::MyArr()
{
	for (int i = 0;i < 10;i++)
	{
		arr[i] = i + 1;
	}
	p = arr;
}

MyArr::~MyArr()
{
}
