//#include <iostream>
//using namespace std;
//
//template <typename T , typename TT>
//void fun(T t, TT a)
//{
//	cout << "i am fun ~" << endl;
//}
//
//template <typename T>
//void fun1(T a)
//{
//	cout << "i am fun1 ~" << endl;
//}
//
////函数模板的具体化
//template<> void fun1<int>(int a)
//{
//	cout << a << endl;
//}
//
////普通函数，优先级最高
//void fun1(int a)
//{
//	cout << "我是普通函数 ~ " << endl;
//}
//
//int main()
//{
//	fun(1,2);
//	fun1(1);
//	return 0;
//}