#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	int& a;
	const int b;
	cStu() :age(10), height(180.69f),a(age),b(250)	//�������Ĺ��캯��
	{
		//Ȼ������� ��ֵ
		//age = 18;
	}
};

int main()
{
	cStu* pSt = new cStu;
	cout << pSt->age << endl;
	cout << pSt->height << endl;
	cout << pSt->a << endl;
	cout << pSt->b << endl;


	return 0;
}