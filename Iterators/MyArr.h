#pragma once
#include <iterator>

using namespace std;

//input_iterator_tag; //�������� �����
//output_iterator_tag; //�������� ������
//forward_iterator_tag; //���������������� ��������
//bidirectional_iterator_tag; //������������
//random_access_iterator_tag; //������������� �������

class MyArr: public iterator<input_iterator_tag,int>
{
private:
	int arr[10];
	int* p;
public:
	bool operator!=(const MyArr& it);
	bool operator==(const MyArr& it);
	MyArr& operator++();
	MyArr operator++(int);
	int const& operator*();

	MyArr();
	~MyArr();
};