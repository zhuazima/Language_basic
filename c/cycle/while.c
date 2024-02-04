/*
 * @Author: zhuazima 1025854946@qq.com
 * @Date: 2024-01-24 10:19:14
 * @LastEditors: zhuazima 1025854946@qq.com
 * @LastEditTime: 2024-02-04 21:12:43
 * @FilePath: \Language_basic-main\c\cycle\while.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)

{
    long num;
    long sum = 0L;     /* 把sum初始化为0 */
    int status;

    // printf("Please enter an integer to be summed ");
    // printf("(q to quit): ");
    // status = scanf("%ld", &num);     //while 是入口条件循环
    // while (status == 1)  /* == 的意思是“等于” */
    // {
    //     sum = sum + num;
    //     printf("Please enter next integer (q to quit): ");
    //     status = scanf("%ld", &num);
    // }
    // printf("Those integers sum to %ld.\n", sum);

    int n = 5;
    while (n < 7)                  // 第7行
    {
        printf("n = %d\n", n);
        n++;                       // 第10行
        printf("Now n = %d\n", n); // 第11行
    }
    printf("The loop has finished.\n");


    return 0;
}