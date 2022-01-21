/*
牛顿迭代法求平方根
*/

#include <iostream>
using namespace std;
double EPS=0.001;
int main()
{
    double a;
    cin >>a;
    if( a>=0 ){
        double x=a/2, lastX=x+1+EPS;
        while( x-lastX>EPS || lastX-x>EPS){
            lastX=x;
            x=(x+a/x)/2;
        }
        cout <<x;
    }
    else
        cout <<"it can't be nagitive.";
    return 0;
}