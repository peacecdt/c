/*************************************************************************
	> File Name: 10.string_cat.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Tue 13 Oct 2026 09:09:13 PM CST
 ************************************************************************/

#include<stdio.h>

#define STR(n) #n  // # 表示格式化为字符串
#define RUN(func){\
    func; \
    printf("%s done\n",#func); \
}

void test1(){
    printf("this is test1\n");
    return;
}

void test2(int a,int b){
    printf("this is test2 : %d, %d\n",a,b);
    return;
}

#define CAT(a,b) a##b // ## 表示链接 结果：ab

int main(){
    printf("%s\n",STR(hello world));
    RUN(test1());
    RUN(test2(2,3));
    int n10 = 123, n11 = 456;
    CAT(n,10) = 789; // ## 表示链接-结果：n10
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}
