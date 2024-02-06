/*
  for 循环，方便给计数器设置初始值和递增
  
*/

#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;
    for (count = 1; count <= NUMBER; count++)
    printf("Be my Valentine!\n");
    return 0;
}