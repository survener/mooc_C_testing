/*
输入m，n。表示第一个矩阵m行n列。
然后输入矩阵m行n列信息。
再下一行输入整数p、q。表示矩阵为p行q列（n=p）
然后输入矩阵p、q
要求输出两个矩阵相乘的结果矩阵(1<m,n,p,q <=8)

输入
2 3
2 4 5
2 1 3
3 3
1 1 1
2 3 2 
0 1 4
输出

*/

#include <iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cin >>m >>n;
    int a[m][n];
    for( int i=0; i<m; i++){
        for( int j=0; j<n; j++){
            cin >>a[i][j];
        }
    }
    cin >>p >>q;
    int b[p][q];
    int c[q][n];
    for( int i=0; i<p; i++){
        for( int j=0; j<q; j++){
            cin >>b[i][j];
        }
    }
    for( int i=0; i<m; i++){
        for( int j=0; j<q; j++){
            c[i][j]=0;
            for( int k=0; k<n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for( int i=0; i<m; i++){
        for( int j=0; j<q; j++){
            cout <<c[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}

//有点复杂