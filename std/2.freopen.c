/***********************************************************************
 * > File Name: 2.freopen.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 00:40:01 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    freopen("output.txt","w",stdout); // r 读, w 写
    freopen("input.txt","r",stdin);
    printf("hello freopen, stdout\n");
    return 0;
}
