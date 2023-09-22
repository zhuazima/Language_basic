#include <iostream>
using namespace std;

class cStu
{
public:
	int age;
	float height;
	int* p;

	cStu()//���캯��
	{
		this->age = 18;//��ʵ����Ҫдthis �ģ�ֻ��Ϊ����ϰһ��
		height = 180.1f;
		p = new int ;
	}

	//ע�͵������Ĭ�Ͽ������죬��������ʱ���ظ��ͷ��ڴ棬��ɱ���
	cStu(const cStu& St)//��������
	{
		age = St.age;
		height = St.height;
		p = new int;
	}

	~cStu()//��������
	{
		delete(p);
	}

};

//�ú������⿽������
cStu& fun(cStu& St)	//���ض��������
{
	//����ֱ�Ӹ������Ա��ֵ������

	return St;
}

int main()
{
	cStu St;
	cout << St.age << "  " << St.height << endl;

	cStu St1(St);//����ÿ������죬��ʵ���Ǻ���������
	cout << St1.age << "  " << St1.height << endl;

	cStu St2 = St;//����ÿ�������
	cout << St2.age << "  " << St2.height << endl;

	cStu* p = new cStu(St);//����ÿ�������
	delete(p);//�����Ҫ���˰�


	return 0;
}