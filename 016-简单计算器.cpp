/*
016:简单计算器
描述
一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。

输入
输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
输出
输出只有一行，一个整数，为运算结果。然而：
1. 如果出现除数为0的情况，则输出：Divided by zero!
2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
样例输入
1 2 +
样例输出
3
提示
可以考虑使用if和switch结构。
*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cin >>a >>b >>c;
    if ( b==0&&c=='/'){
        cout <<"Divided by zero!";
    } else{
        switch ( c ){
            case '+': cout <<a+b;   break;
            case '-': cout <<a-b;   break;
            case '*': cout <<a*b;   break;
            case '/': cout <<a/b;   break;
            default : cout <<"Invalid operator!";
        }
    }
}