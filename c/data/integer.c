#include<stdio.h>
#include<stdlib.h>

int main( void )
{
	/*进制字面量和变量*/
    int number = 10;    //十进制
    int number_1 = 0x10;   //十六进制
    int number_2 = 010;     //八进制
	printf("number is dec = %#d, hex = %#x, octal = %#o \r\n",number,number_1,number_2);

    /*各种整数占用空间*/
    printf("short size %d bytes,int size %d bytes,long size %d bytes,long long size %d bytes,char size %d bytes \r\n",sizeof(short),sizeof(int),sizeof(long),sizeof(long long),sizeof(char));

    /*int long 都是占用32位，他们能存储的最大值也是一样的*/
	int a = 0x7fffffff;
	long b = 0x7fffffff;
	printf("int = %d ,long = %d\r\n",a,b);
	
    unsigned short n = -1;
	printf("short n = %d\r\n",n);

    /*符号 char, 技术上看计算机存储的字符也是整数*/
	char ch = 'A';
	int _ch = 65;
	char enter = '\n';
	printf("%c , %c ,%c \r\n", ch,_ch,enter);

	/*转义符*/
	printf("Gramps sez, \"a \\ is a backslash.\"\n");
	printf("Hello!\007\n");   // \007 蜂鸣器

	return 0;
}