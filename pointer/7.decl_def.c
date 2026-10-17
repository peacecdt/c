/*************************************************************************
	> File Name: 7.decl_def.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Tue 13 Oct 2026 12:40:59 AM CST
 ************************************************************************/

#include<stdio.h>

int add(int ,int); // 声明函数

extern int c,d; // 声明变量
int cc = 3, dd = 4;// 声明变量

int main(){
    int a,b;//定义变量a，b

    return 0;
}

// 定义函数
int add(int a,int b){
    return a+b;
}


