/***********************************************************************
 * > File Name: 5.fibonacci-3.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 22:08:42 CST
 **********************************************************************/

#include <stdio.h>

#define MAX_N 4000000

int main(){
    int a = 1, b = 2, sum = 2;
    while(a + b < MAX_N){
        a = a + b;
        a ^= b;
        b ^= a;
        a ^= b;
        if(!(b & 1)) sum += b;
    }

    printf("%d\n",sum);
    return 0;
}
