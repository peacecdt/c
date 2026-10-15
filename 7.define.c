/*************************************************************************
	> File Name: 7.define.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Tue 13 Oct 2026 08:33:55 PM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.1415926
#define S(a,b) a * b // 宏就是做简单的替换，宏就是做简单的替换，宏就是做简单的替换
#define P(a) {\
              printf("define P: %d\n",a);\
}



int main(){
    
    printf("PI = %lf\n",PI);
    printf("S(3,4) = %d\n",S(3,4));
    printf("S(3+7,4) = %d\n",S(3+7,4)); // 宏定义：简单的替换，所以这里结果就是 3+7 * 4 
    S(int,p); // 简单替换后的结果： int * p;
    int n = 123;
    p = &n;
    P(*p);
    return 0;
}
