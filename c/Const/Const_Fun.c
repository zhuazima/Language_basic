#include <stdio.h>
#include <stdlib.h>

int num = 10;

const int* fun( const int a)
{
	//�ں����β���ʹ�� const 
	//�Ǳ����ββ����޸�
	a = 20;

	printf("%d\n", a);


	return &num;
}



int main(void)
{

	//�Է���ֵָ����е�ַ�����ǲ��е�
	//���Ա�������ֵ
	*fun(10) = 13;



	//�����ַ�������
	const char* p = "Hello world";
	*p = 'e';










	return 0;
}