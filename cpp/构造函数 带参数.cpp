//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int age;
//	float height;
//	cStu( int a ,float b)	//带参数的构造函数
//	{
//		age = a;
//		height = b;
//	}
//	cStu()	//多构造函数构成函数重载
//	{
//		age = 11;
//		height = 13.45f;
//	}
//
//	//为了多文件，会使用类内声明，类外定义（要使用命名空间符号）的方式，这里就不用写了，我懒了
//
//};
//
//int main()
//{
//	cStu* pSt = new cStu(12,12.34f);//传递不同的参数会调用不同的构造函数
//	cout << pSt->age << endl;
//	cout << pSt->height << endl;
//
//	cStu* pSt1 = new cStu;
//	cout << pSt1->age << endl;
//	cout << pSt1->height << endl;
//
//
//	return 0;
//}