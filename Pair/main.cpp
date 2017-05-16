#include <iostream>
#include <conio.h>
#include "MyNum.h"

int main()
{
	auto p1=make_pair(MyNum(3), MyNum(4));
	auto p11 = make_pair(MyNum(5), p1);
	auto p111 = make_pair(p1, p11);
	pair<MyNum, MyNum> p2 = make_pair(MyNum(5), MyNum(3));

	if (p1 > p2)
	{
		cout << "P1>P2" << endl;
	}
	else
	{
		cout << "P1<P2";
	}
	_getch();
	return 0;
}