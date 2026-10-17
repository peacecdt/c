/***********************************************************************
 * > File Name: 18.struct_size.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-17 19:57:55 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct A{
    char a[20];
    int b;
    short c;
} A;


int main(){
    printf("A = %ld\n",sizeof(A));

    return 0;
}
