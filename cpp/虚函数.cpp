//#include <iostream>
//using namespace std;
//
//class cFather
//{
//public :
//	virtual void fun()	//父类的成员函数的名字和参数列表以及返回值，都要和子类成员函数一样
//	{
//		cout << "i am father~" << endl;
//	}
//};
//
//class cSon : public cFather
//{
//public:
//	void fun()
//	{
//		cout << "i am son~" << endl;
//	}
//
//};
//
//
//class cSon1 : public cFather
//{
//public:
//	void fun()
//	{
//		cout << "i am son 1~" << endl;
//	}
//
//};
//
//
//
//int main()
//{
//	cFather* p = new cSon1;	//指针指向哪个儿子，就用哪个儿子的
//
//	p->fun();
//
//	return 0;
//}