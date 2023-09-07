//#include <iostream>
//using namespace std;
//
//void fun(void);
//void fun(int , int );
//void fun(int , float );
//
//int main()
//{
//	fun(1 ,2.1f);
//
//	return 0;
//}
////如果只是函数返回值类型不一样，是不能作为重载函数的
//void fun(void)
//{
//	cout << "I am fun 1" << endl;
//}
////如果这里有缺省值，是会跟第一个fun在调用的时候冲突
//void fun(int a , int b = 2)
//{
//	cout << a + 1 << "  " << b + 1 << endl;
//}
//
//void fun(int a, float b)
//{
//	cout << a + 2 << "  " << b + 0.1 << endl;
//}
//
