#include <stdio.h>
#include <stdlib.h>

union Un
{
    struct 
    {
        unsigned char   :3;
        unsigned char b :3;
        unsigned char c :5;
    };
    unsigned char test[2];
	// unsigned char ch;
	// short a;
	// int b;
}un1;

int main(void)
{
    unsigned char size;
    size  = sizeof(un1);
    
    un1.test[1] = 0;
    un1.test[0] = 0;
    un1.c = 16;

	printf("%d\n\n\n%x\n%x\n",size,un1.test[0], un1.test[1]);

	return 0;
}