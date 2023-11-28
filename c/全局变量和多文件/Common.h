#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include "a.h"
#include "b.h"

//这里没有赋值，只是全局变量的声明而不是定义
//定义的话，只能有一次，在main.c
//不加extern也可以，但是一般加上
extern int a;
extern int b;





#endif