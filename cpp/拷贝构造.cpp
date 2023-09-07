//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int age;
//	float height;
//	int* p;
//
//	cStu()//构造函数
//	{
//		this->age = 18;//其实不需要写this 的，只是为了练习一下
//		height = 180.1f;
//		p = new int ;
//	}
//
//	//注释掉会进入默认拷贝构造，在析构的时候重复释放内存，造成崩溃
//	cStu(const cStu& St)//拷贝构造
//	{
//		age = St.age;
//		height = St.height;
//		p = new int;
//	}
//
//	~cStu()//析构函数
//	{
//		delete(p);
//	}
//
//};
//
////用函数避免拷贝构造
//cStu& fun(cStu& St)	//返回对象的引用
//{
//	//这里直接给对象成员赋值就完了
//
//	return St;
//}
//
//int main()
//{
//	cStu St;
//	cout << St.age << "  " << St.height << endl;
//
//	cStu St1(St);//会调用拷贝构造，其实就是函数重载嘛
//	cout << St1.age << "  " << St1.height << endl;
//
//	cStu St2 = St;//会调用拷贝构造
//	cout << St2.age << "  " << St2.height << endl;
//
//	cStu* p = new cStu(St);//会调用拷贝构造
//	delete(p);//这个不要忘了啊
//
//
//	return 0;
//}