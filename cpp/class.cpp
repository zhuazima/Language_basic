#include <iostream>
using namespace std;

class cPeople
{
public:
	int a;
protected:
	void fun()
	{
		cout << a << endl;
	}
private:
protected:
public:

};


int main(void)
{
	cPeople op;
	op.a = 12;
	op.fun();

	cPeople* p = new cPeople;
	p->a = 13;
	p->fun();
	delete p;

	return 0;
}