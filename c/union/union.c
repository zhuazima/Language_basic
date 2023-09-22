#include <stdio.h>
#include <stdlib.h>

union Un
{
    struct 
    {
        unsigned char a :3;
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
    un1.a = 0x03;
    un1.c = 0x10;
    

	printf("\n %d\n 0x%x\n 0x%x\n",size,un1.test[0], un1.test[1]);

	return 0;
}

