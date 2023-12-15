#include <iostream>
using namespace std;

class cStu
{
private:
	int age;
	float height;

public:
	cStu()
	{
		age = 18;
		height = 180.12f;
	}
	friend istream& operator >>(istream& ist, cStu& St);
	friend ostream& operator << (ostream& os, const cStu& St);
};

istream& operator >>(istream& ist, cStu& St)
{
	ist >> St.age >> St.height;
	if (ist.fail());
	{
		St.age = 0;
		St.height = 0;
	}
	return ist;
}

ostream& operator << (ostream& os, const cStu& St)
{
	os << St.age << endl <<St.height << endl;
	return os;
}

int main()
{
	cStu St;
	cin >> St;
	cout << St;


	return 0;
}