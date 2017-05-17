#include <iostream>
#include <conio.h>
#include "Equal10.h"
#include "BetweenAB.h"
#include <algorithm>

using namespace std;

void f(BetweenAB arg)
{
	if (arg(5))
	{
		cout << "Ok" << endl;
	}
	else
	{
		cout << "Not ok" << endl;
	}
}

int main()
{
	int numbers[] = { 10,4,3,-5,11,10,2,6,10,18 };
	BetweenAB fobj(-5,5);
	Equal10 a;
	int counter = count_if(numbers, numbers + 10, fobj);
	cout << counter << endl;
	_getch();
	return 0;
}