// /***********************************************************************************************************************************
// 类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
// 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
// ***********************************************************************************************************************************/

#include <iostream>
using namespace std;


class cStu
{
public:
	int age = 18;
	double height = 18.1;
	void ShowData()
	{
		cout << "age = " << age << ' ' << "height = " << height << endl;
	}
	/*定义友元函数和友元类*/
	friend void FriendFunc();
	friend class cTeach;
private:
    int FamilyNumber = 4;
};

/*友元函数*/
void FriendFunc()
{
	cStu st;
	st.ShowData();
    
	cout << "FamilyNumber = " << st.FamilyNumber << endl;     //友元函数可以访问类的私有成员
	st.FamilyNumber = 5;
	cout << "FamilyNumber = " << st.FamilyNumber << endl;

}

/*友元类*/
class cTeach
{
public:
	cStu st;
	void TeacherFunc()
	{
		st.height = 180.2;
		cout << endl << "teacher function " << endl;
		st.ShowData();
	}	
};


int main()
{
	FriendFunc();    //友元函数不是类成员，因此可以不需要定义对象，可以直接调用这个函数

	cTeach teach;
	teach.TeacherFunc();    //TeacherFunc() 是友元类的成员，所有不能直接调用，必须先定义对象

	return 0;
}


