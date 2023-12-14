#include <iostream>
using namespace std;

void fun(void);
void fun(int , int );
void fun(int , float );

int main()
{
	fun(1 ,2.1f);

	return 0;
}

void fun(void)
{
	cout << "I am fun 1" << endl;
}

void fun(int a , int b = 2)
{
	cout << a + 1 << "  " << b + 1 << endl;
}

void fun(int a, float b)
{
	cout << a + 2 << "  " << b + 0.1 << endl;
}

