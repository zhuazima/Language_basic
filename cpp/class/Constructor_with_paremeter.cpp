/***********************************************************************************************************************************


***********************************************************************************************************************************/



#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	cStu( int a ,float b)	//
	{
		age = a;
		height = b;
	}
	cStu()	//
	{
		age = 11;
		height = 13.45f;
	}


};

int main()
{
	cStu* pSt = new cStu(12,12.34f);
	cout << pSt->age << endl;
	cout << pSt->height << endl;

	cStu* pSt1 = new cStu;
	cout << pSt1->age << endl;
	cout << pSt1->height << endl;


	return 0;
}