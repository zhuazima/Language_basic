#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    /* 对字符串末尾的空字符的理解 \0 */
    printf("0");    //不是字符 '0'
    printf("\0");    //是非打印字符
    if('\0' == 0)   printf("equal\n");    //它的 ascll 码值是0

    /*比较strlen 和 sizeof */
    char name[40] = "what's your name?";
    printf("%s\n",name);
    printf("%zd,%zd\n",sizeof(name),strlen(name));   //strlen 实际的长度，sizeof 是数组的长度

    /*字符串空间如果不给 \0 分配空间会有问题*/
    char test_string[3] = "aha";
    printf("%s",test_string);    //会有多余的打印出来 ： ahawhat's your name?

    return 0;
}

