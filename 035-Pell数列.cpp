/*
描述
Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * a_n − 1 + a_n - 2 (n > 2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
输出
n行，每行输出对应一个输入。输出应是一个非负整数。
样例输入
2
1
8
样例输出
1
408
*/

#include <iostream>
using namespace std;
long long Pell(long long n){
    int a[n];
    a[0]=1;a[1]=2;
    for(int i=2; i<n; i++){
        a[i]=(2*a[i-1]+a[i-2])%32767;
    }
    return a[n-1];
}
int main(){
    int n,a;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >>a;
        cout <<Pell(a) <<endl;
    }
    return 0;
}