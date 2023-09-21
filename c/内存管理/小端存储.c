#include <stdio.h>
#include <stdlib.h>


//所谓小端存储就是，低地址存低数据位的数据
//这个例子，如果是大端存储的话，应该是先打印 12  34  56  78
//
int main(void)
{
	int a = 0x12345678;
	char* p = (char*)&a;
	printf("%x,%p\n%x,%p\n%x,%p\n%x,%p\n", p[0], &p[0], p[1], &p[1], p[2], &p[2], p[3], &p[3]);
	return 0;
}