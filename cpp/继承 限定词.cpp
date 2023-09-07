//#include <iostream>
//using namespace std;
//
//class cPeople
//{
//public:
//	void fun()
//	{
//		cout << "i am fun~" << endl;
//	}
//protected:
//	void fun1()
//	{
//		cout << "i am fun1~" << endl;
//	}
//private:
//	void fun2()
//	{
//		cout << "i am fun2~" << endl;
//	}
//};
//
////public的继承，以public的限定方式把父类的public继承过来
////class cXiaoming : public cPeople
////{
////public :
////	void fun3()
////	{
////		cout << "i am fun3~" << endl;
////		fun();
////	}
////};
//
//
////protected的继承，以protected的限定方式把父类的public、和protected继承过来
////class cXiaoming : protected cPeople
////{
////public:
////	void fun3()
////	{
////		cout << "i am fun3~" << endl;
////		//下面两个，类内可以用，但是在主函数依旧是不能访问的。
////		fun();
////		fun1();
////	}
////};
//
//
////private的继承,以private的限定方式把父类的public、和protected继承过来
//class cXiaoming : private cPeople
//{
//public:
//	void fun3()
//	{
//		cout << "i am fun3~" << endl;
//		fun();
//		fun1();
//	}
//};
//
////看上去protected和private似乎是一样的，其实他们的差别体现在子类的子类中
//
//
//int main()
//{
//	cXiaoming Xm;
//	//Xm.fun();
//	Xm.fun3();
//
//
//
//
//	return 0;
//}