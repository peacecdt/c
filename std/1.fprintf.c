/***********************************************************************
 * > File Name: 1.fprintf.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 00:35:19 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    fprintf(stdout,"hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr,"%d\n",n);
    return 0;
}
