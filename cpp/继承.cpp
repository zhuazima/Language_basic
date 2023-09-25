#include <iostream>
using namespace std;

class cPeople
{
public:
		void fun()
		{
			cout << "i am father~" << endl;
		}
};

class cChildren:public cPeople
{
public:
	void fun1()
	{
		cout << "i am children ~";
	}

};


int main()
{
	cChildren cCh;
	cCh.fun();
	cCh.fun1();

	return 0;
}