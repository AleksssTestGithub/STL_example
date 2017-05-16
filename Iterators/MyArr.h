#pragma once
#include <iterator>

using namespace std;

//input_iterator_tag; //итератор ввода
//output_iterator_tag; //итератор вывода
//forward_iterator_tag; //однонаправленный итератор
//bidirectional_iterator_tag; //двусторонний
//random_access_iterator_tag; //произвольного доступа

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