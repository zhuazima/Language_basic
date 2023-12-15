#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	cStu()
	{
		age = 18;
		height = 180.1f;
	}
	//void operator +(int i)
	//{
	//	cout << age + i << endl;
	//}
};

//void operator + (cStu& St, int i)
//{
//	cout << (St.age + i) << endl;
//}


//int operator +(cStu& St, int i)
//{
//	return St.age + i;
//}

cStu operator +(cStu & St, int i)
{
	St.age += i;
	return St;		// return &St;
}


int main()
{
	cStu St;
	//cout << St + 1 + 10;
	cout << (St + 1).age << endl;		//(St + 1).age
	cout << St.age << endl;
	return 0;
}