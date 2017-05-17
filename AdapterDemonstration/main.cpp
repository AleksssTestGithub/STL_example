#include <iostream>
#include <functional>
#include <algorithm>
#include <conio.h>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int main()
{
	stack<int> s1;
	vector<int> v1(10);
	for (int i = 0;i < 10;i++)
	{
		v1[i] = i + 1;
	}
	auto numbers = v1.begin();
	stack<int, list<int>> s2;
	//float numbers[] = { 10,20,30,40,50,10 };
	int counter = count_if(numbers, numbers + 10, not1(bind1st(equal_to<int>(), 10)));
	cout << counter << endl;
	_getch();
	return 0;
}