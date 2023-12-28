/***********************************************************************************************************************************


***********************************************************************************************************************************/


#include <iostream>
using namespace std;

/*定义类*/
class cStu
{
public:
	double length;
	float height;
	int a;

	cStu(double len);
	~cStu();    //析构函数在退出函数的时候会把实例占用的资源释放
};

/*函数定义*/
cStu::cStu(double len)
{
	length = len;
	cout << "Object is being created" << endl;
}

cStu::~cStu()
{
	cout << "Object is being deleted" << endl;
}


/*function main*/
int main()
{
    cStu st(5);
	cout << st.length << endl;
	return 0;
}