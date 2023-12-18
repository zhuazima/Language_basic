#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	int* p;

	cStu()
	{
		this->age = 18;
		height = 180.1f;
		p = new int ;
	}

	cStu(const cStu& St)
	{
		age = St.age;
		height = St.height;
		p = new int;
	}

	~cStu()
	{
		delete(p);
	}

};

cStu& fun(cStu& St)
{
	return St;
}

int main()
{
	cStu St;
	cout << St.age << "  " << St.height << endl;

	cStu St1(St);
	cout << St1.age << "  " << St1.height << endl;

	cStu St2 = St;
	cout << St2.age << "  " << St2.height << endl;

	cStu* p = new cStu(St);
	delete(p);


	return 0;
}