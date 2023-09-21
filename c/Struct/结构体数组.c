#include<stdio.h>
#include<stdlib.h>

struct shuaibi
{
	char name[10];
	int age;
};

int main(void)
{
	struct shuaibi A[3] = { {"zhangsan",18},{"lisi",19} ,{"wangwu",20} };
	printf("%s,%d",A[0].name,A[2].age);

	return 0;
}
