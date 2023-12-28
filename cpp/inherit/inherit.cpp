/***********************************************************************************************************************************
继承基类成员：可以继承public 和 protected
继承方式：
***********************************************************************************************************************************/


#include <iostream>
using namespace std;

class cPeople
{
public:
		void father_func()
		{
			cout << "father class" << endl;
		}
};

class cChildren:public cPeople
{
public:
	void son_func()
	{
		cout << "son class";
	    father_func();
	}


};


int main()
{
	cChildren cCh;
	cCh.father_func();
	cCh.son_func();

	return 0;
}