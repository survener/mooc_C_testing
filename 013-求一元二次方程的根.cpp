#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,x1,x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    x1= (-b + sqrt(b*b-4*a*c))/(2*a);
    x2= (-b - sqrt(b*b-4*a*c))/(2*a);
    if( b*b==4*a*c )
    {
        printf("x1=x2=%.5f\n", x1);
    }else if( b*b>4*a*c ){
        if ( x1>x2 ){
            printf("x1=%.5f;x2=%.5f\n", x1, x2);
        }else {
            printf("x1=%.5f;x2=%.5f\n", x2, x1); 
        }
    }else {
        if ( -b/(2*a)==0 ){
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", b/(2*a), sqrt(4*a*c-b*b)/(2*a),b/(2*a), sqrt(4*a*c-b*b)/(2*a));
        }else {
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b/(2*a), sqrt(4*a*c-b*b)/(2*a),-b/(2*a), sqrt(4*a*c-b*b)/(2*a));
        }
    }
}