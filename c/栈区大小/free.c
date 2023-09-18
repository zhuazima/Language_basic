#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<memory.h>


int main(void)
{
	//free�൱�ڰѵ�ַ��������ݳ�ʼ��
	//�ͷſռ�֮��֮ǰ��ָ��Ͳ��������ˣ����Ѿ��Ǹ�Ұָ����
	//���ԣ��ͷ�֮���ָ�븳ֵΪ��NULL
	int* p = (int*)malloc(4);
	*p = 12;

	printf("%p,%d\n", p, *p);

	free(p);
	p = NULL;

	//ָ�븳ֵΪNULL֮��ϵͳ���������������
	printf("%p,%d\n", p, *p);



	return 0;
}
