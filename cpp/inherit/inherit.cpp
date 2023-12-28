/***********************************************************************************************************************************
继承基类成员：可以继承public 和 protected

继承方式：
***********************************************************************************************************************************/


#include <iostream>
using namespace std;

class cPeople
{
public:
    int age = 10;
	float height = 181.12;

	void father_func()
	{
		cout << "father class" << endl;
	}
};



class cChildren :public cPeople
{
public:
	void son_func()
	{
		cout << "son class " << endl;
        cout << "age = " << age << ' ' << "height = " << height << endl;
		father_func();
	}


};


int main()
{
	cChildren cCh;
	cCh.son_func();

	return 0;
}