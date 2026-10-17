/***********************************************************************
 * > File Name: 17.struct.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-17 19:45:59 CST
 **********************************************************************/
#include <stdio.h>
#include <stddef.h>

typedef struct A1 {
    char a;
    int b;
    struct B1 {
        double d;
    } B;
    short c;
} A1;

typedef struct A2 {
    char a;
    int b;
    struct B2 {
        double d;
    } B;
    short c;
} A2;

int main(void) {
    printf("A1 size = %zu\n", sizeof(A1));
    printf("A1 align = %zu\n", _Alignof(A1));

    printf("A2 size = %zu\n", sizeof(A2));
    printf("A2 align = %zu\n", _Alignof(A2));

    return 0;
}
