#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	/*进制字面量和变量*/
    int number = 10;    //十进制
    int number_1 = 0x10;   //十六进制
    int number_2 = 010;     //八进制
	printf("number is dec = %#d, hex = %#x, octal = %#o \r\n",number,number_1,number_2);


	char ch = 'a';
	// ch = getchar();
	printf("%c\n", ch);

	return 0;
}