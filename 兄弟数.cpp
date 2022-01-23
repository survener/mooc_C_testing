/*
兄弟数
如果两个不同的正整数，他们的和是他们的因子，就称这两个数为兄弟数。
小的称为第数，大的称为兄数。
先后输入正整数n和m(n<m)，请在n至m这m-n+1个数中找出一对兄弟数。
如果找不到，就输出“No Solution.”
如果能找到，就找出和最小的那一对；如果有多对兄弟数和相同且最小，就找出第数最小的那一对。
*/

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >>n >>m;
    int a=m+1,b=m+1; //a、b为找到的最佳兄弟数
    for( int i=n; i<m; i++){ //取第数，m-n种取法
        if( i> (a+b)/2+1 )  break;
        for( int j=i+1; j<=m; j++ ){ //取兄数
            if( i+j > a+b ) break;
            if( (i*j)%(i+j) == 0 ){ //发现兄弟数
                if( i+j < a+b ){ //发现更小兄弟数
                    a=i;b=j;
                }else if( i+j == a+b && i<a ){
                    a=i;b=j;
                }
            }
        }
    }
    if( a==m+1 )    cout <<"No Solution."; //没找到
    else cout <<a <<"," <<b;
    return 0;
}