//#include <iostream>
//using namespace std;
//
//class cGrandfather
//{
//public:
//	cGrandfather(int a ,int b) 
//	{
//		
//	}
//};
//
//class cFather : public cGrandfather
//{
//public:
//	cFather(int a) : cGrandfather( a,12 )	//这就是构造函数的参数传递
//	{
//		
//	}
//};
//
//class cSon : public cFather
//{
//public:
//	cSon( int a ) : cFather( a )	//这里可以把参数a 传递给父类，然后继续传递给祖父类
//	{
//		
//	}
//};
//
//
//int main()
//{
//
//	//构造函数的参数可以多级传递
//	cSon cSo();
//
//
//	return 0;
//}