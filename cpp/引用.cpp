//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	//&是引用符号
//	int& c = a;//意思是给a一个别名c，这就是引用，引用必须声明的时候必须初始化，一个变量可以有多个引用，引用作为一个变量也可以被引用
//	c = 12;
//	cout << a << endl;
//	cout << &a << "  " << &c;//他们的地址是一样的
//
//
//	//常量个引用
//	const int& b = 12;
//	cout << b << endl;
//	//可以输出但是不能更改它的值
//
//	//数组的引用
//	int arr[5];
//	int(&p)[5] = arr;
//	arr[1] = 45;
//	cout << p[1] << endl;
//
//	//二维数组的引用
//	int arr1[2][3];
//	int(&p1)[2][s3] = arr1;
//	arr1[1][2] = 78;
//	cout << p1[1][2] << endl;
//
//	//指针的引用
//	int d = 123;
//	int* pointer = &d;
//	int*& p2 = pointer;
//	cout << d << endl;
//	*p2 = 456;
//	cout << d << endl;
//	
//
//
//	return 0;
//}