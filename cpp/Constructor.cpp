#include <iostream>
using namespace std;

class Stu
{
public:
	int a;
	int b;
	Stu()
	{
		a = 10;
		b = 12;
	}
};
int main()
{
	Stu* pSt = new Stu;	
	cout << pSt->a << endl;
	cout << pSt->b << endl;




	return 0;
}