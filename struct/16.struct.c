/***********************************************************************
 * > File Name: 16.struct.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-17 16:05:48 CST
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct person{
    char name [20];
    int age;
    char gender;
    float height;
} person;

void output(struct person *p){
    printf("%s,%d,%c,%f\n",
            p->name,
            p->age,
            p->gender,
            p->height);
    return;
}


int main(){
    person su = {"Suo",22,'W',123};
    struct person cdt = {"Captian Tao",18,'M',182};
    // 直接访问，通过 结构体.属性名 的方式
    printf("%s,%d,%c,%f\n",cdt.name,cdt.age,cdt.gender,cdt.height);
    // 通过指针去访问：间接访问
    output(&cdt);
    output(&su);
    return 0;
}
