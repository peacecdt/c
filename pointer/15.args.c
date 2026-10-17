/***********************************************************************
 * > File Name: 15.args.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-15 22:17:45 CST
 **********************************************************************/

#include <stdio.h>

#define D_VAL(a,val) (#a[0] ? a : val)
#define test_func(a,b,c) \
    __test_func(D_VAL(a,97),D_VAL(b,113),D_VAL(c,12.3));
void __test_func(int a,int b,double c){
    printf("a = %d, b = %d, c = %lf\n",a,b,c);
    return;
}

int main(){
    int a=0;
    printf("%d$d",a,b);
    int aa = "hello";
    test_func(,,);
    test_func(1,,);
    test_func(,2,);
    test_func(,,3);
    test_func(1,2,3);
    return 0;
}
