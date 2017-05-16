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
	//������������

	//�� �������
	vector<int> sizeArray(10); //������ �� 10 ���������
	vector<int> valueArray(10, 5); //������ �� 10 ��������� �� ��������� 5

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

	//���������� ���������
	cout << itArray.capacity() << endl; //���������� ��������� � ����������
	cout << itArray.max_size() << endl; //������������ ���������� ��������� � ����������
	itArray.empty(); //�������� �� �������
	//itArray.clear(); //������� ����������
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

	itArray.insert(itArray.begin(), -1);//�������� �� ������� ��������� (�� �������)
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	itArray.insert(itArray.begin(), 2, -2); //�������� 2 ���� -2 � ������� ���������
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
	itArray.erase(itArray.begin()); //������� ������� �� ���������
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
	itArray.erase(itArray.begin(), itArray.begin() + 2);//������� ������� �� ��������� �� ���������
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	itArray.push_back(5); //��������� ������� � �����
	itArray.pop_back(); //������� ������� � �����
	cout << itArray.size() << endl;
	itArray.resize(10);//�������� ���������� �������� ���������
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

	itArray.swap(initArray); //�������� ���������� ���� ��������

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

	cout << itArray[5] << endl; //������ �� ������� ��� �������� 
	itArray[5] = -100;
	/*for (auto i = itArray.begin();i != itArray.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	cout << itArray.at(5) << endl; //������ �� ������� � ��������� ������ �� �������
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

	cout << itArray.front() << endl;//������ � ������� ��������
	itArray.front() = 42;
	cout << itArray.front() << endl;

	itArray.back(); //������ � ���������� �������� (����������� ���������� front)

	//���������
	itArray.begin(); //�������� �� ������
	itArray.cbegin();//����������� �������� �� ������

	itArray.end(); //�������� �� �����
	itArray.cend();//����������� �������� �� �����

	itArray.rbegin(); //��������� �������� �� ������
	itArray.rend(); // -||- �� �����
	/*for (auto i = itArray.rbegin(); i !=itArray.rend(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	int* p=itArray.data(); //��������� �� ������ �������
	//cout << *p << endl;

	list<int> listInt(10, 5);
	listInt.push_front(42);// ���������� � ������ ������
	for (auto i = listInt.begin(); i !=listInt.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	deque<int> intDeque(10, 2);
	

	_getch();
	return 0;
}