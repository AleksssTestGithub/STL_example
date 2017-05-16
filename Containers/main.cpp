#include <iostream>
#include <conio.h>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "MyNumber.h"

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
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	//количество элементов
	cout << itArray.capacity() << endl; //количество элементов в контейнере
	cout << itArray.max_size() << endl; //максимальное количество элементов в контейнере
	itArray.empty(); //проверка на пустоту
	//itArray.clear(); //очистка контейнера
	//for (auto i = itArray.begin();i != itArray.end();i++)
	//{
	//	cout << *i << " ";
	//}
	//cout << endl;
	for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	itArray.insert(itArray.begin(), -1);//вставить по позиции итератора (со здвигом)
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	itArray.insert(itArray.begin(), 2, -2); //вставить 2 раза -2 в позицию итератора
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	itArray.erase(itArray.begin()); //удалить элемент по итератору
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}*/
	cout << endl;
	itArray.erase(itArray.begin(), itArray.begin() + 2);//удалить элемент по итератору из диапазона
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	itArray.push_back(5); //добавляет элемент в конец
	itArray.pop_back(); //удаляет элемент с конца
	cout << itArray.size() << endl;
	itArray.resize(10);//изменить количество хранимых элементов
	cout << itArray.size() << endl;
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	for (auto i = initArray.begin();i != initArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	itArray.swap(initArray); //обменять содержимое двух векторов

	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	for (auto i = initArray.begin();i != initArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	cout << itArray[5] << endl; //доступ по индексу без проверки 
	itArray[5] = -100;
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	cout << itArray.at(5) << endl; //доступ по индексу с проверкой выхода за пределы
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	itArray.at(5) = -10000;
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	cout << itArray.front() << endl;//доступ к первому элементу
	itArray.front() = 42;
	cout << itArray.front() << endl;

	itArray.back(); //доступ к последнему элементу (возможности аналогичны front)

	//итераторы
	itArray.begin(); //итератор на начало
	itArray.cbegin();//констнатный итератор на начало

	itArray.end(); //итератор на конец
	itArray.cend();//константный итератор на конец

	itArray.rbegin(); //реверсный итератор на начало
	itArray.rend(); // -||- на конец
	/*for (auto i = itArray.rbegin(); i !=itArray.rend(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	int* p=itArray.data(); //указатель на первый элемент
	//cout << *p << endl;

	list<int> listInt(10, 5);
	listInt.push_front(42);// добавление в начало головы
	for (auto i = listInt.begin(); i !=listInt.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	deque<int> intDeque(10, 2);
	

	_getch();
	return 0;
}