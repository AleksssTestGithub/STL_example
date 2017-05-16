#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> intArr({ 1,2,3,4,5,6,7,8,9,10 });
	/*for (int i = 0; i < 10; i++)
	{
		cout << intArr[i] << " ";
	}
	cout << endl;*/

	int j = 0;
	for (auto i = intArr.begin();i != intArr.end();i++,j++)
	{
		*i = 10 - j;
	}

	for (auto i = intArr.end()-1; i!=intArr.begin(); i--)
	{
		cout << *i << " ";
	}
	cout << endl;
	_getch();
	return 0;
}