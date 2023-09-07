//#include <iostream>
//using namespace std;
//
////构造函数不带参数的类
//template <typename T>
//class cA
//{
//public:
//	T a;
//	cA()
//	{
//		a = 12;
//	}
//};
//
////构造函数带参数 的类
//template <typename TT>
//class cB
//{
//public:
//	TT b;
//	cB(TT n)
//	{
//		b = n;
//	}
//};
//
////构造函数带多个参数
//template <typename TT ,typename TTT>
//class cC
//{
//public:
//	TT c;
//	cC(TT n)
//	{
//		c = n;
//	}
//};
//
//
//int main()
//{
//	cA<int> cAa;//类模板的参数列表
//	cout << cAa.a << endl;
//
//	cB<int> cBbb(13);
//	cout << cBbb.b << endl;
//
//	cC<int,int> cCcc(14);
//	cout << cCcc.c << endl;
//
//
//	return 0;
//}