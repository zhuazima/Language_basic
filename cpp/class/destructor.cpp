#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	int* p;

	//int a;
	//cStu(int a)
	//{
	//	this->a = a;
	//}

	//cStu* GetAddr()
	//{
	//	return this;:  *this
	//}

	cStu( int* &p)
	{
		p = new int(10);
	}
	
	~cStu()
	{
		delete  p;
	}

		

};




int main()
{
	int* pp = NULL;
	{
		cStu St(pp);
	}
	
	cout << *pp << endl;



	return 0;
}