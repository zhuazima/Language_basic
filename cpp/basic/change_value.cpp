#include <iostream>
using namespace std;

void exchange(int& , int& );

int main()
{
	int a = 12, b = 24;
	cout << a << ' ' << b << endl;
	exchange(a, b);
	cout << a << ' ' << b << endl;


	return 0;
}

void exchange(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}