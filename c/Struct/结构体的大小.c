#include<stdio.h>
#include<stdlib.h>

//�ṹ����ڴ���룬�ڶ���������ʱ��˳��������ռ�õĿռ��С��������
struct str
{

	char c;
	short s;
	int i;
	double d;

};

int main(void)
{
	//sizeof����������ֽ�Ϊ��λ��
	printf("%u", sizeof(struct str));





	return 0;
}
