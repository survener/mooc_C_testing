/*
012:奇偶数判断
描述
给定一个整数，判断该数是奇数还是偶数。

输入
输入仅一行，一个大于零的正整数n。
输出
输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even。
样例输入
5
样例输出
odd
*/

#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if ( x%2==0){
        printf("even\n");
    }else{
    printf("odd\n");
    }
}