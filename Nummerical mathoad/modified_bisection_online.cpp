#include<bits/stdc++.h>

using namespace std;

int coefficient[30];
int degree;

double f(double x)
{
    double res=coefficient[0];
    for(int i=1;i<=degree;i++)
    {
        res=coefficient[i]+res*x;
    }
    return res;
}

int main()
{
    cout<<"enter the degree: ";
    cin>>degree;
    cout<<"enter the poly coefficients: ";

    for(int i=0;i<degree;i++)
        cin>>coefficient[i];

    double a,b,x0,dx=0.05,x1,x2,E=0.001;
    cout<<"enter the initial guess: ";
    cin>>a>>b;
    cout<<"iteration    x1      x2      x0      f(x1)       f(x2)       f(x0)"<<endl;

    while(true)
    {
        x1=a;
        x2=x1+dx;
        if(f(x1)*f(x2)<0)
        {
            int it=0;
            do{
                x0=(x1+x2)/2.0;
                if(f(x0)==0.0)
                {
                    cout<<"Root is: "<<x0<<endl;
                    break;
                }
                if(f(x0)*f(x1)<0)
                {
                    x2=x0;
                }
                else{
                    x1=x0;

                }
                it++;

                cout<<it<<"     "<<x1<<"     "<<x2<<"     "<<x0<<"     "<<f(x1)<<"     "<<f(x2)<<"     "<<f(x0)<<endl;
            }while(fabs((x2-x1)/x2) >E );
        }

        if(x2<b)
        {
            a=x2;
        }
        else
        {
            break;
        }



    }
}
