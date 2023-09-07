//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int age;
//	float height;
//	cStu()
//	{
//		age = 18;
//		height = 180.1f;
//	}
//	//类内定义
//	//void operator +(int i)//和类外定义只是参数的形式不同
//	//{
//	//	cout << age + i << endl;
//	//}
//};
//
////没有返回值时，不能进行重复运算的
////类外定义
////void operator + (cStu& St, int i)
////{
////	cout << (St.age + i) << endl;
////}
//
////有返回值的的运算符重载
////int operator +(cStu& St, int i)
////{
////	return St.age + i;
////}
//
////返回对象的引用，不能直接返回对象，否则会调用构造函数，使数据发生改变
//cStu operator +(cStu & St, int i)
//{
//	St.age += i;
//	return St;		//对象的引用本质还是对象，所以不能写成 return &St;
//}
//
//
//int main()
//{
//	cStu St;
//	//cout << St + 1 + 10;	//这就是调用了
//
//	//在运算符重载函数的形参不是引用的时候这样也是成立的，为什么呢？
//	//原来，St + 1运算后其值是被保存的，但不是保存在参里面，保存在哪里，我也不知道
//	//但是其数据是保存了的，因此可以打印输出，同样的也可以用 .age 的形式
//	//不过形参最好还是写成 引用
//	cout << (St + 1).age << endl;		//这里可以这么写(St + 1).age
//
//	cout << St.age << endl;
//
//
//	return 0;
//}