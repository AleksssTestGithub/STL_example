#pragma once
#include <utility>
using namespace std;
using namespace rel_ops;
class MyNum
{
private:
	int x;
public:
	MyNum(int x=0 );
	int getX() const;
	bool operator==(const MyNum& r) const;
	bool operator<(const MyNum& r) const;
	~MyNum();
};

