/*
017:求整数的和与均值
描述
读入n（1 <= n <= 10000）个整数，求它们的和与均值。

输入
输入第一行是一个整数n，表示有n个整数。
第2~n+1行每行包含1个整数。每个整数的绝对值均不超过10000。
输出
输出一行，先输出和，再输出平均值（保留到小数点后5位），两个数间用单个空格分隔。
样例输入
4
344
222
343
222
样例输出
1131 282.75000
*/

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,x,sum=0;
    scanf("%d", &n);
    for( int cnt=0; cnt<n; cnt++){
        scanf("%d", &x);
        sum+=x;
    }
    printf("%d %.5f", sum, double(sum)/n);
    return 0;
}
