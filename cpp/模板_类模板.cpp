#include <iostream>
using namespace std;

template <typename T>
class cA
{
public:
	T a;
	cA()
	{
		a = 12;
	}
};

template <typename TT>
class cB
{
public:
	TT b;
	cB(TT n)
	{
		b = n;
	}
};

template <typename TT ,typename TTT>
class cC
{
public:
	TT c;
	cC(TT n)
	{
		c = n;
	}
};


int main()
{
	cA<int> cAa;
	cout << cAa.a << endl;

	cB<int> cBbb(13);
	cout << cBbb.b << endl;

	cC<int,int> cCcc(14);
	cout << cCcc.c << endl;


	return 0;
}