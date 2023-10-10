#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int& c = a;
	c = 12;
	cout << a << endl;
	cout << &a << "  " << &c;


	const int& b = 12;
	cout << b << endl;

	int arr[5];
	int(&p)[5] = arr;
	arr[1] = 45;
	cout << p[1] << endl;

	int arr1[2][3];
	int(&p1)[2][3] = arr1;
	arr1[1][2] = 78;
	cout << p1[1][2] << endl;

	int d = 123;
	int* pointer = &d;
	int*& p2 = pointer;
	cout << d << endl;
	*p2 = 456;
	cout << d << endl;
	


	return 0;
}