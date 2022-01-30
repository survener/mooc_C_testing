/*
描述
给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25

输入
输入包含一个5行5列的矩阵
输出
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
样例输入
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8  6 4 7 2
15 10 11 20 25
样例输出
4 1 8
*/

#include <iostream>
using namespace std;
#define Row 5
#define Col 5
int K[Row][Col];
int main(){
    int max,a,b,sum=0;
    for(int i=0; i<Row; i++){
        for(int j=0; j<Col; j++){
            cin >>K[i][j];
        } 
    }
    for(int i=0; i<Row; i++){
        a=i;
        b=0;
        max=K[i][0];
        for(int j=0; j<Col; j++){
            if(K[i][j]>max){
                b=j;max=K[a][b];
            }
        }
        sum=1;
        for(int k=0; k<Row; k++){
            if(K[k][b]<max){
                sum=0;
                break;
            }
        }
        if(sum==1){
            cout <<a+1 <<" " <<b+1 <<" " <<K[a][b];
            break;
        }
    }
    if(sum==0)
        cout <<"not found";
    return 0;
}