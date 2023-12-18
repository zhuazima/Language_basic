#include <iostream>
using namespace std;

class cStu
{
public:
	int a;
	static int b;

	static const int c = 3; 
	static const char ch = 7;

	cStu():a(10)
	{
		a = 11;
		b = 12;
	}
};
int cStu::b = 20;

int main()
{
	cout << cStu::b << endl;

	cStu cSt;
	cout << cSt.a << "  " << cSt.b << endl;

	return 0;
}