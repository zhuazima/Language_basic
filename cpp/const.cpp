//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int a;
//	int b;
//
//	cstu()	//const不能用于构造函数或者析构函数
//	{
//		a = 10;
//	}
//
//	void show()const	
//	{
//		
//		//a = 10;	//不能修改数据成员的值
//		int i;
//		i = 20;		//但是可以修改函数内部数据变量的值
//		cout << i << endl;
//		cout << a << endl;
//		cout << "i am show ~";
//	}
//
//
//};
//
//int main()
//{
//	cstu stu;
//	stu.show();
//
//
//
//	return 0;
//}