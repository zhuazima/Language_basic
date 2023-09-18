#include <iostream>
using namespace std;


struct Prarent
{
	int age;
	float height;
};

class cStu
{
public:
	int arr[5];
	Prarent sPa;

	cStu(Prarent st):sPa(st)	//���βθ���ĳ�Ա��ʼ��
	{
		memset(arr, 0, sizeof(int) * 5);
	}

};

int main()
{	
	Prarent sPa1 = { 18,180.12f };

	cStu St(sPa1);	//���ݲ��������캯��
	for (int i = 0;i < 5;i++)
	{
		cout << St.arr[i] << endl;
	}

	cout << St.sPa.age << endl << St.sPa.height << endl;




	return 0;
}