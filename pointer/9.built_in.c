/*************************************************************************
	> File Name: 9.built_in.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Tue 13 Oct 2026 08:55:41 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){

    printf("__DATE__ = %s\n",__DATE__);
    printf("__TIME__ = %s\n",__TIME__);
    printf("__LINE__ = %d\n",__LINE__);
    printf("__FILE__ = %s\n",__FILE__);
    printf("__FUNC__ = %s\n",__func__);
    printf("__PRETTY_FUNCTION__ = %s\n",__PRETTY_FUNCTION__);
    return 0;
}
