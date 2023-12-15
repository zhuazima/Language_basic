#include <iostream>
using namespace std;

int& fun();

int main()
{
	int &b = fun();
	return 0;
}

int& fun()
{
	static int a = 0;
	a++;
	return a;
}