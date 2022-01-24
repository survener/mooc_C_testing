/*
已知2012年1月25日是星期三，编写一个程序，输入用“年 月 日”表示的一个2012年1月25日以后的日期，
输出该日期是星期几（星期天输出0）；
sample input
2015 11 02
sample out 
1
*/

//算出该日期对比给定日期过了X天，然后X%7

#include <iostream>
using namespace std;
int Monthdays[13]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int Y,M,D;
    int days=0; //从2012/1/25开始过了多少天
    cin >>Y >>M >>D;
    for( int y=2012; y<Y; y++){
        if( y%4==0 && y%100!=0 || y%400==0 ){
            days+=366;
        }else
            days+=365;
    }
    if( Y%4==0 && Y%100!=0 || Y%400==0 ){
        Monthdays[2]=29;
    }
    for( int m=1; m<M; m++){
        days+=Monthdays[m];
    }
    days+=D;
    days-=22;
    cout <<days%7;
    return 0;
}