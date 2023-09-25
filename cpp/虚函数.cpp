#include <iostream>
using namespace std;

class cFather
{
public :
	virtual void fun()
	{
		cout << "i am father~" << endl;
	}
};

class cSon : public cFather
{
public:
	void fun()
	{
		cout << "i am son~" << endl;
	}

};


class cSon1 : public cFather
{
public:
	void fun()
	{
		cout << "i am son 1~" << endl;
	}

};



int main()
{
	cFather* p = new cSon1;

	p->fun();

	return 0;
}