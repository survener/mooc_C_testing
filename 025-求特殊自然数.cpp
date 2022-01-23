/*
描述
一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。

输入
无。
输出
三行：
第一行是此自然数的十进制表示；
第二行是此自然数的七进制表示；
第三行是此自然数的九进制表示。
样例输入
（无）
样例输出
（不提供）
*/

#include <iostream>
using namespace std;
int main(){
    for( int i=1; i<999; i++ ){
        for ( int a=0; a<7; a++){
            for ( int b=0; b<7; b++ ){
                for ( int c=0; c<7; c++ ){
                    if( i==(a*7*7+b*7+c) && i==(c*9*9+b*9+a) ){
                        cout <<i <<endl;
                        cout <<a <<b <<c <<endl;
                        cout <<c <<b <<a <<endl;
                    }
                }
            }
        }
    }
    return 0;
}

// 需要注意进制数的位数中的大小限制。