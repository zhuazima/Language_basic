//#include <iostream>
//using namespace std;
//
//struct node
//{
//	int a;
//	//C++ 可以结构体中定义函数指针
//	//*p加（），是为了防止p先和右边的括弧结合，系统会误认为这是个函数p，而结构体中是不能定义函数的，这就会造成矛盾
//	//void(*p)();
//	//以上是C语言中的使用方法
//
//	//C++,直接把函数定义在结构体中
//	void fun()
//	{
//		cout << "Hello ~" << endl;
//	}
//};
//
//
//
//int main()
//{	//C中的定义和初始化
//	//struct node A = {10,fun};
//
//	//C++
//	//这里定义变量，可以省略struct 关键字
//	node A;
//	A.a = 10;
//	cout << A.a << endl;
//	A.fun();
//
//
//
//	return 0;
//}