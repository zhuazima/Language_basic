#include<stdio.h>
#include<stdlib.h>

struct str
{

	char c;
	short s;
	int i;
	double d;
};

int main(void)
{
	//sizeof
	printf("%u", sizeof(struct str));

	return 0;
}
