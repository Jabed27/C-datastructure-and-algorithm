#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
//function used is x^3-2x^2+3  bisection
double func(double x)
{
    return x*x -4*x -10;
}

double e=0.001;
double c;

void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }

    c = a;

    while ((b-a)/b >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0)
        {
            printf("Root = %lf\n",c);
            break;
        }
        else if (func(c)*func(a) < 0)
        {
            printf("Root = %lf\n",c);
            b = c;
        }
        else
        {
            printf("Root = %lf\n",c);
            a = c;
        }
    }
}

int main()
{
    double a,b;
    a=-2;
    b=-1;

    printf("The function used is x^3-2x^2+3\n");
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    bisection(a,b);
    printf("\n");
    printf("Accurate Root calculated is = %lf\n",c);

    return 0;
}
