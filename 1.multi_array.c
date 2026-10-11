/*************************************************************************
	> File Name: 1.multi_array.c
	> Author: chendatao
	> Mail: peacecdt@gmail.com
	> Created Time: Wed Oct  7 11:36:29 2026
 ************************************************************************/

#include<stdio.h>
int main(){

    int a[3][4],cnt=1;
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            a[j][i]=(cnt++);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
