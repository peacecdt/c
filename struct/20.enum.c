/***********************************************************************
 * > File Name: 20.enum.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-17 20:46:50 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Number{
    zero,
    one,
    two,
    three,
    four
};


int main(){
    enum Number a;
    a = zero;
    printf("%d",a);

    return 0;
}
