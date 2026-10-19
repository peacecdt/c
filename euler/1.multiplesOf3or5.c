/***********************************************************************
 * > File Name: 1.multiplesOf3or5.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 01:54:35 CST
 **********************************************************************/

#include <stdio.h>

#define MAX_N 1000

int is_val(int n){
//    if(n % 3 == 0 || n % 5) return 1;
//    return 0;
    return (n % 3 == 0 || n % 5 == 0);
}

int main(){
//    int num = 1000;
    int sum = 0;
    for(int i = 0 ;i < MAX_N;i++){
        if(is_val(i)) sum += i;
    }

    printf("%d\n",sum);

    return 0;
}
