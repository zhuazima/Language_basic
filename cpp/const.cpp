#include <iostream>
using namespace std;

class cstu
{
public:
	int a;
	int b;

	cstu()	//const 
	{
		a = 10;
	}

	void show()const	
	{
		
		//a = 10;
		int i;
		i = 20;
		cout << i << endl;
		cout << a << endl;
		cout << "i am show ~";
	}


};

int main()
{
	cstu stu;
	stu.show();



	return 0;
}