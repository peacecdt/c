/*************************************************************************
	> File Name: 11.max.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Tue 13 Oct 2026 09:31:00 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX(a,b) ({ \
    int _a = a,_b = b; \
    _a > _b ? _a : _b;\
})

#define P(func){ \
    printf("%s = %d\n",#func,func); \
}

int main(){
    P(MAX(2,3));
    P(5 + MAX(2,3));
    P(MAX(2,MAX(3,4)));
    P(MAX(2,3 > 4 ? 3 : 4));
    int a =7;
    P(MAX(a++,6));
    printf(" after MAX a = %d\n",a);
    return 0;
}
