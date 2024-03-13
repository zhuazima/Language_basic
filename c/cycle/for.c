/*
 * @Author: zhuazima 1025854946@qq.com
 * @Date: 2024-02-06 21:15:51
 * @LastEditors: zhuazima 1025854946@qq.com
 * @LastEditTime: 2024-03-13 19:14:48
 * @FilePath: \Language_basic-main\c\cycle\for.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* for_geo.c */

#include <stdio.h>

int main(void)
{
    double debt;
    for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
    printf("Your debt is now $%.2f.\n", debt);
    return 0;
}