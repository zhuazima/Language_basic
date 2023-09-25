#include <iostream>
using namespace std;

int main()
{
	//C
	//int* p = malloc(sizeof(int));
	//C++
	int* p = new int;

	*p = 12;
	cout << *p << endl;
	delete p;

	int* p1 = new int[5];
	delete[] p1;
}
