#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b)
{
	printf("����������໶�����þ�����Ц��\n");



	return 0;
}


int fun1(int a)
{

	printf("����������໶�����þ�����Ц��\n");
	printf("����������໶�����þ�����Ц��\n");



	return 0;
}

int main(void)
{
	//*pҪ����С���ţ��漰������˳�򣬱�ʾp �Ǹ�ָ��
	//�������ܽ��պ����ĵ�ַ
	//���������ʾ��Ǹ���ַ
	int (*p)(int, int) = fun1;
	p(1,2);




	return 0;
}