#pragma once
class BetweenAB
{
private:
	int a;
	int b;
public:
	bool operator()(int const& el);
	BetweenAB();
	BetweenAB(int _a, int _b);
	~BetweenAB();
};

