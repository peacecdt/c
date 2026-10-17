/***********************************************************************
 * > File Name: 13.log.c
 * > Author: chendatao
 * > Mail: peacecdt@gmail.com
 * > Created Time: 2026-10-15 21:23:39 CST
 **********************************************************************/

#include <stdio.h>

#define DEBUG 1
#define WARN 2
#define ERROR 3
#define FATEL 4
#define NO_LOG 5
#define LOG(level)\
if (level >= LOG_LEVEL)\
    printf("%s %s %d: ",__DATE__,__FILE__,__LINE__),\
printf


int main(){
    int a = 123;
    printf("hello world\n");
    printf("a = %d\n",a);
    LOG(DEBUG)("hello world,DEBUG\n");
    LOG(WARN)("hello world,WARN\n");
    LOG(ERROR)("hello world,ERROR\n");
    LOG(FATEL)("hello world,FATEL\n");
    LOG(DEBUG)("a = %d,DEBUG\n",a);
    LOG(WARN)("a = %d,WARN\n",a);
    LOG(ERROR)("a = %d,ERROR\n",a);
    LOG(FATEL)("a = %d,FATEL\n",a);
    return 0;
}
