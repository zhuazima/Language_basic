#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	cStu():age (10),height(180.69f)	
	{
		age = 18;
	}
};

int main()
{
	cStu* pSt = new cStu;
	cout << pSt->age << endl;
	cout << pSt->height << endl;


	return 0;
}