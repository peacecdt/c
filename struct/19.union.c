/***********************************************************************
 * > File Name: 19.union.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-17 20:36:11 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union A{
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int number;
};

#define P(a,format){ \
    printf("%s = " format "\n",#a,a); \
}

int main(){ 
    union A a;
    a.number = 0x61626364;
    P(a.number,"%x");

    return 0;
}
