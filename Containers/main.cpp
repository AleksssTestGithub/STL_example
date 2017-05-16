#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	//конструкторы

	//по размеру
	vector<int> sizeArray(10); //вектор из 10 элементов
	vector<int> valueArray(10, 5); //вектор из 10 элементов со значением 5

	/*for (int i = 0; i < 10; i++)
	{
		cout << valueArray[i] << " ";
	}
	cout << endl;*/

	vector<int> initArray({ 1,2,3,4,5,6,7,8,10 });
	/*for (auto i = initArray.begin();i != initArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	vector<int> itArray(initArray.begin() + 2, initArray.end() - 2);
	for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	_getch();
	return 0;
}