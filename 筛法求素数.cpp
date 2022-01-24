#include <iostream>
using namespace std;
#define MAX_NUM 10000000
char isPrime[MAX_NUM+10];
int main()
{
    for( int i=2; i<=MAX_NUM; i++ ){
        isPrime[i]=1;
    }
    for( int i=2; i<=MAX_NUM; i++ ){
        if(isPrime[i])
            for( int j=2*i; j<=MAX_NUM; j+=i )
                isPrime[j]=0;
    }
    for( int i=0; i<MAX_NUM; i++ ){
        if(isPrime[i])
            cout <<i <<" ";
    }
    return 0;
}

