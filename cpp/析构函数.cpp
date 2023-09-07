//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int age;
//	float height;
//	int* p;
//	//this 指针,意思是这个对象，在声明对象的时候和对象绑定。
//	//是类成员函数的隐含参数，只能在类函数里面使用
//	//int a;
//	//cStu(int a)
//	//{
//	//	this->a = a;
//	//}
//	
//	//还有一个用法是的到这个对象的地址
//	//感觉这个用起来还是挺爽的
//	//cStu* GetAddr()
//	//{
//	//	return this;//或者返回这个对象:  *this
//	//}
//
//	cStu( int* &p)
//	{
//		p = new int(10); //申请一个空间，int类型，值是10
//	}
//	
//	~cStu()	//析构函数
//	{
//		delete  p;
//	}
//
//		
//
//};
//
//
//
//
//int main()
//{
//	int* pp = NULL;
//	//加断点查看执行过程，声明对象的时候回执行构造函数
//	//到}之前，回去执行析构函数
//	{
//		cStu St(pp);
//	}
//	
//	cout << *pp << endl;	//为什么栈区指针可以指向堆区指针
//
//
//
//	return 0;
//}