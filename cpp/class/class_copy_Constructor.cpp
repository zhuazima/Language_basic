/***********************************************************************************************************************************
拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。拷贝构造函数通常用于：
通过使用另一个同类型的对象来初始化新创建的对象。
复制对象把它作为参数传递给函数。
复制对象，并从函数返回这个对象。
如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。

构造函数的常见形式：
classname (const classname &obj) {
   // 构造函数的主体
}
***********************************************************************************************************************************/

#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	int* p;

	cStu();     //构造函数
	cStu(const cStu& St);    //拷贝构造函数，注意：这里的&不表示地址，而是引用
	~cStu();
};

/*定义函数*/
cStu::cStu()     //构造函数
{
	cout << "constructor function" << endl;
	this->age = 18;
	height = 180.1f;
	p = new int ;
}

cStu::cStu(const cStu& St)    //拷贝构造函数
{
	cout << "copy constructor function" << endl;
	age = St.age;
	height = St.height;
	p = new int;
}

cStu::~cStu()
{
	delete(p);
	cout << "Object is being deleted" << endl;
}

/*main function*/
int main()
{
	cStu st;    //定义一个对象
	cout << st.age << " " << st.height << endl;

    /*复制对象的几种方式*/
	cStu st1(st);     //使用拷贝构造函数复制对象
	cout << st1.age << " " << st1.height << endl;

	cStu st2 = st;     //使用赋值语句复制对象
	cout << st2.age << " " << st2.height << endl;

    /*进入到拷贝构造函数，但这个方式并不会自动进入到析构函数，需要手动进入，这说明 析构函数 释放内存的优先级并没有 delete() 的高，
	  也说明，new() 跟   delete() 必须成对出现*/
	cStu* st3 = new cStu(st);    
	cout << st3->age << " " << st3->height << endl;
	delete(st3);

	return 0;
}