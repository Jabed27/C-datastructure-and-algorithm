#include<bits/stdc++.h>
using namespace std;
void approximate(int x[],int y[],int n)
{
    float m,c,sum_x = 0,sum_y= 0,sum_xy= 0,sum_x2= 0;
    for(int i =0; i<n; i++)
    {
        sum_x = sum_x + x[i];
        sum_y = sum_y + y[i];
        sum_xy = x[i]*y[i];
        sum_x2 = pow(x[i],2);
    }
    m = (n*sum_xy-sum_x*sum_y)/(n*sum_x2-pow(sum_x,2));
    c = (sum_y-m*sum_x)/n;
    cout<<"m = "<<m<<endl;
    cout<<"c = "<<c<<endl;
}
int main()
{
    int x[] = {1,2,3,4,5};
    int y[] = { 14, 27, 40, 55, 68 };
    int n = sizeof(x)/sizeof(x[0]);
    approximate(x,y,n);
}
