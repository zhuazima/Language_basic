#include <iostream>
using namespace std;

struct node
{
	int a;
	void fun()
	{
		cout << "Hello ~" << endl;
	}
};



int main()
{
	node A;
	A.a = 10;
	cout << A.a << endl;
	A.fun();

	return 0;
}