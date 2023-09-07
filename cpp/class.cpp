//#include <iostream>
//using namespace std;
//
//class cPeople
//{
//public:		//访问修饰符,缺省是private:
//	int a;
//protected:
//	void fun()
//	{
//		cout << a << endl;
//	}
//private://纯私有，只有类内可以使用
//protected://类内和子类内可以使用
//public://对外可见
//
//};
//
//
//int main(void)
//{
//	//感觉类里面的函数是在一个类变量的内部执行的，只是感觉
//	cPeople op;
//	op.a = 12;
//	op.fun();
//
//	cPeople* p = new cPeople;
//	p->a = 13;
//	p->fun();
//	delete p;
//
//	return 0;
//}