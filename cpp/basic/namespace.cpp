#include <iostream>
using namespace std;

namespace stu
{
	void sort()
	{
	
		cout << "hello ";
	}

}
//using namespace stu;

void sort()
{
	cout << "world " << endl;
}


int main()
{
	//sort();
	//using namespace stu;
	//sort();
	
	stu::sort();
	sort();

	return 0;
}
