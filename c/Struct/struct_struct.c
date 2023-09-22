#include<stdio.h>
#include<stdlib.h>

struct shuaibi
{
	char name[10];
	int age;
};

struct xiaogege
{
	struct shuaibi shuai;
	int height;
	char homeland[20];
};


int main(void)
{
	struct xiaogege A= { {"hfsdf",18},180,"gfsdfds" };
	printf("%s,%d,%d,%s", A.shuai.name,A.shuai.age,A.height,A.homeland);




	return 0;
}
