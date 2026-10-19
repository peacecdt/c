/***********************************************************************
 * > File Name: 4.fibonacci-2.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-18 21:52:14 CST
 **********************************************************************/

#include <stdio.h>

#define MAX_N 4000000
int fib[3] = {0,1,2}; // 循环利用三个位置 0 1 2
// 滑动数组-滚动数组（数组空间可以循环利用）
int main(){
    int n = 2, sum = 2;
    while(fib[n % 3] + fib[(n - 1) % 3] < MAX_N){
        n += 1;
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if(!(fib[n % 3] & 1)) sum += fib[n % 3];
    }
    printf("%d\n",sum);
    return 0;
}
