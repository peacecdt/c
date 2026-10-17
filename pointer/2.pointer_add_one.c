/*************************************************************************
	> File Name: 2.pointer_add_one.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Thu Oct  8 11:26:40 2026
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,*p=&a;
    printf("&a = %p\n",&a);
    printf("p + 0 = %p\n", p + 0);
    printf("p + 1 = %p\n", p + 1);
    printf("p + 2 = %p\n", p + 2);
    printf("p + 3 = %p\n", p + 3);

    return 0;
}
