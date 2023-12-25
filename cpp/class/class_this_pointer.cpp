/***********************************************************************************************************************************

***********************************************************************************************************************************/

#include <iostream>
using namespace std;


/*类的定义*/
class cStu
{
public:
	int age = 18;
	double height = 18.1;
	void ShowData();

	/*定义友元函数和友元类*/
	friend void FriendFunc();  //友元函数没有 this 指针
	friend class cTeach;
private:
    int FamilyNumber = 4;
};

void cStu::ShowData()
{
	cout << "age = " <<  this->age << ' ' << "height = " << this->height << endl;
}

int main()
{
    
   cStu stu;
   stu.ShowData();


	return 0;
}