//#include <iostream>
//using namespace std;
//
//class cFather
//{
//public:
//	virtual void fun()
//	{
//		cout << "i am father ~" << endl;
//	}
//
//};
//
//class cSon : public cFather
//{
//public:
//	void fun()
//	{
//		cout << "i am son ~" << endl;
//	}
//
//};
//
//
//int main()
//{
//	cFather* p = new cSon;
//	p->fun();
//
//	//这个太难了吧
//	//类型的强制转化是必须的，不然无法操作
//	typedef void (*pF)();//pF 是void型函数指针的别名
//	((pF)(*(int*)(*(int*)p)))();
//
//
//
//
//	return 0;
//}