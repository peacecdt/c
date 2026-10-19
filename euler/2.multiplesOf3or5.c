/***********************************************************************
 * > File Name: 2.multiplesOf3ort.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 02:15:52 CST
 **********************************************************************/

#include <stdio.h>

int main(){
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * (999 / 5) / 2;
    int sum15 = (15 + 995 / 15 * 15) * (999 / 15) / 2;
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
