#include <stdio.h>
#include <stdlib.h>


//所谓小端存储就是，低地址 存 低数据位 的数据
int main(void)
{
	//‭0000 1000    0000 0100    0000 0010   0000 0001‬,‭134480385‬
	int a = 0x12345678;
	char* p = (char*)&a;

	printf("%x,%p\n%x,%p\n%x,%p\n%x,%p\n", p[0], &p[0], p[1], &p[1], p[2], &p[2], p[3], &p[3]);




	return 0;
}