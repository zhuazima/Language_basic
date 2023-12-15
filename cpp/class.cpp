#include <iostream>
using namespace std;

class cPeople
{
public:
	int a;
// protected:  //如果是 Protected ，方法就不能被使用
	void fun()
	{
		cout << a << endl;
	}
private:
protected:

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