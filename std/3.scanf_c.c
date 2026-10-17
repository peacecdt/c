/***********************************************************************
 * > File Name: 3.scanf_c.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 01:01:54 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c1, c2;
    int a , b;
    scanf("%d", &a);
    scanf("%c%c",&c1,&c2);
    scanf("%d",&b);
    printf("a = %d , b = %d\n", a, b);
    printf("c1 = %d, c2 = %d\n",c1,c2);
    return 0;
}
