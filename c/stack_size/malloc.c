#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int* p = (int*)malloc(8);
	printf("%d", sizeof(*p));

	int* p = (int*)malloc(2 * 1024u * 1024u *1024u );
	printf("%p", p );

	return 0;
}
