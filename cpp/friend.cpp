//#include <iostream>
//using namespace std;
//
//class cStu
//{
//	int age = 12;
//	void fun()
//	{
//		cout << age << endl;
//	}
//	friend void fun1();//友元，理解为给朋友共享,这样这个类的成员对fun1函数来说就是 public的了
//	
//	friend class cTeach;//友类，友这个东西慎用，可以用一个public的函数把类的值返回，从而和外部相通，这就是接口函数
//};
//
//class cTeach
//{
//public:
//	int height = 180;
//	cStu st;
//	void fun2()
//	{
//		//一个类调用另一个类，要在自己的函数里面调用
//		st.fun();
//	}	
//};
//
//void fun1()
//{
//	cStu St;
//	St.fun();
//
//	St.age = 13;
//	St.fun();
//}
//
//int main()
//{
//	fun1();
//
//	cTeach teach;
//	teach.fun2();
//
//
//
//	return 0;
//}