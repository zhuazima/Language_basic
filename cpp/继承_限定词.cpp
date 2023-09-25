#include <iostream>
using namespace std;

class cPeople
{
public:
	void fun()
	{
		cout << "i am fun~" << endl;
	}
protected:
	void fun1()
	{
		cout << "i am fun1~" << endl;
	}
private:
	void fun2()
	{
		cout << "i am fun2~" << endl;
	}
};

//class cXiaoming : public cPeople
//{
//public :
//	void fun3()
//	{
//		cout << "i am fun3~" << endl;
//		fun();
//	}
//};


//class cXiaoming : protected cPeople
//{
//public:
//	void fun3()
//	{
//		cout << "i am fun3~" << endl;
//		fun();
//		fun1();
//	}
//};


class cXiaoming : private cPeople
{
public:
	void fun3()
	{
		cout << "i am fun3~" << endl;
		fun();
		fun1();
	}
};



int main()
{
	cXiaoming Xm;
	//Xm.fun();
	Xm.fun3();




	return 0;
}