#include <iostream>
using namespace std;


/*类的定义*/
class Stu
{
public:
	int a;
	int b;
    void set_length(double len);
	double get_length(void);

	Stu();    //构造函数，用来初始化类的成员
	private:
	    int length;
};

/*成员函数定义，包括构造函数*/
Stu::Stu()    //定义构造函数
{
	a = 1;
	b = 2;
	length = 10;    //构造函数可以访问私有成员
    cout << "object has been created \r\n" << endl;
	cout << "a = " << a << ' ' << "b = " << b  << ' ' <<"length = "<<  length  << ' ' << endl;

}
int main()
{
	Stu* pSt = new Stu;	     //构造函数在初始化新对象时会执行
	cout << pSt->a << endl;
	cout << pSt->b << endl;
    // cout << pSt->length << endl;  //不能访问类的私有成员



	return 0;
}