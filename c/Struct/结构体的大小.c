#include<stdio.h>
#include<stdlib.h>

//结构体的内存对齐，在定义机构体的时候，顺序按照类型占用的空间从小到大排列
struct str
{

	char c;
	short s;
	int i;
	double d;

};

int main(void)
{
	//sizeof的输出是以字节为单位的
	printf("%u", sizeof(struct str));





	return 0;
}
