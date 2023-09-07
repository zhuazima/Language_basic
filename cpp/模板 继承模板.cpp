//#include <iostream>
//using namespace std;
//
//template <typename T,typename Y = int >
//class cFather
//{
//public:
//	T a;
//	cFather( T t)
//	{
//		a = t;
//	}
//};
//
////class cSon : public cFather<int ,char>	//这里可以指定模板参数类型
////或者用更灵活的方式
//template <typename X,typename Z>
//class cSon : public cFather <X,Z>		//这时候在声明对象的时候要传递模板参数
//{
//public:
//	cSon() : cFather<X,Z>(12)
//	{
//		
//	}
//};
//
//
//
//int main()
//{
//	cSon<int, char> cSo ;
//	cout << cSo.a << endl;
//
//
//	return 0;
//}