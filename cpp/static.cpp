//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int a;
//	static int b;
//
//	static const int c = 3;//静态常量整形可以直接初始化 
//	static const char ch = 7;
//
//	cStu():a(10)
//	{
//		a = 11;
//		b = 12;
//	}
//};
//int cStu::b = 20;//类外初始化
//
//int main()
//{
//	cout << cStu::b << endl;	//直接使用命名作用域  是不会调用构造函数的
//
//	cStu cSt;		//声明对象后，就会调用构造函数
//	cout << cSt.a << "  " << cSt.b << endl;
//	
//
//
//
//
//	return 0;
//}