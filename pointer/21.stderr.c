/***********************************************************************
 * > File Name: 21.stderr.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 00:20:53 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("hello world\n"); // stdout
    int n;
    scanf("%d", &n);  // stdin
    perror("out of rang"); // stderr
    return 0;
}
