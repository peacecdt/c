/*************************************************************************
	> File Name: 3.test.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Thu Oct  8 12:38:55 2026
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    unsigned int n;
    char *p = (char *) &n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("n = %u\n",n);

    return 0;
}
