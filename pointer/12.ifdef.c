/***********************************************************************
 * > File Name: 12.ifdef.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-15 21:05:23 CST
 **********************************************************************/

#include <stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif


int main(){
    printf("a = %d\n",a);
    return 0;
}
