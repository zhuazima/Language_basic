#include "Common.h"


//��̬�������Ϊ���˱�������������������
//������ȫ�ֱ����Ķ���
//��̬ȫ�ֱ�����ֻ���ڱ��ļ���ʹ��
//static int a = 12;
int a = 12;
int b = 24;

//��̬����Ҳ����ͬ�ĺ���,���ԣ���a.c�ļ���ʹ��
//static void fun2(void)
void fun2(void)
{
	printf("wodfosdh");

}



//��̬�ֲ���������
//�����a: 2 2 2    b: 2 3 4
//��Ϊ��̬��������������������������������ڣ�������main����ִ��֮ǰ�ͱ������

void fun5(void)
{
	int a = 1;
	static int b = 1;

	a++;
	b++;

	printf("%d,%d\n", a, b);

}





int main(void)
{

	fun();
	fun1();


	//�ֲ���̬��������
	fun5();
	fun5();
	fun5();




	return 0;
}