#include <stdio.h>
#include <stdlib.h>


//��νС�˴洢���ǣ��͵�ַ�������λ������
//������ӣ�����Ǵ�˴洢�Ļ���Ӧ�����ȴ�ӡ 12  34  56  78
//
int main(void)
{
	int a = 0x12345678;
	char* p = (char*)&a;
	printf("%x,%p\n%x,%p\n%x,%p\n%x,%p\n", p[0], &p[0], p[1], &p[1], p[2], &p[2], p[3], &p[3]);
	return 0;
}