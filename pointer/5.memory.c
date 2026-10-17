/*************************************************************************
	> File Name: 5.memory.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Thu Oct  8 15:02:25 2026
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr1 = (int *)malloc(sizeof(int) * 10); // 动态的申请内存空间，申请10个int型的内存空间。返回值为任意类型的指针 void * 的地址（存储空间的首地址）
    for(int i=0;i<10;i++){
        arr1[i] = rand() %100;
    }
    for(int i = 0 ;i < 10 ;i++){
        printf("arr[%d] = %d \n",i,arr1[i]);
    }

    return 0;
}
