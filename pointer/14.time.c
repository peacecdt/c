/***********************************************************************
 * 
 * > File Name: 13.time.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-15 22:09:41 CST
 **********************************************************************/

#include <stdio.h>
#include <time.h>

#define TIME(func){\
    long long b = clock();\
    func;\
    long long e = clock();\
    printf("%s run %lld\n",#func, 1000 * (e - b) / CLOCKS_PER_SEC);\
}

void test(int n){
    long long sum = 0;
    for (int i=0;i<n;i++){
        sum += i;
    }
    printf("sum = %lld\n",sum);
    return;
}

int main(){
    TIME(test(100000));
    TIME(test(1000000));
    TIME(test(10000000));
    return 0;
}
