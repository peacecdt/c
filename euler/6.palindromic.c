/***********************************************************************
 * > File Name: 6.palindromic.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-19 23:15:36 CST
 **********************************************************************/

#include <stdio.h>

// 
int is_reverse(int n,int base){
    int temp = 0, x = n;
    while(x){
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}

int main(){
    int answer = 0;
    for(int i = 999; i >= 100; i--){
        for(int j = 999; j >= 100; j--){
            if(i * j <= answer || !is_reverse(i * j,10)) continue;
            printf("%d * %d = %d\n",i ,j ,i * j);
            answer = i * j;
        }
    }
    printf("answer = %d\n",answer);
    return 0;
}
