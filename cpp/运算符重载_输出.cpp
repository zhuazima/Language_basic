#include <iostream>
using namespace std;

class cStu
{
public :
	int age;
	float height;
	cStu()
	{
		age = 18;
		height = 180.12f;
	}
};

ostream& operator << (ostream& os, const cStu& St)
{
	os << St.age;
	return os;
}

int main()
{
	cStu St;
	cout << St << "  " << St;


	return 0;
}