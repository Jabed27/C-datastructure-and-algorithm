
#include<bits/stdc++.h>
using namespace std;
float co_efficients[1000], synthetic[1000];
int n;//highest-degree
float root[1000];
float func(float arr[], float x)//function
{
    float p=arr[0];
    for(int i=1; i<=n; i++)
        p=p*x+arr[i];
    //cout<<p;
    return p;
}
float func_ddx(float arr[], float x)//ddx-func
{
    float d=0;
    for(int i=0; i<n; i++)
        d=d+((n-i)*arr[i]*pow(x,(n-i-1)));
    return d;
}
int main()
{
    float x1, x0, f1, fd1, e=0.001;
    int k=0;
    cout<<"Enter order:";
    cin>>n;
    cout<<"Enter coefficients:";
    for(int i=0; i<=n; i++)
        cin>>co_efficients[i];
    cout<<"Enter x0:";
    cin>>x0;
    do
    {
        f1=func(co_efficients,x0);
        fd1=func_ddx(co_efficients,x0);
        x1=x0-(f1/fd1);
        while(fabs((x1-x0)/x1)>e)
        {
            x0=x1;
            f1=func(co_efficients,x0);
            fd1=func_ddx(co_efficients,x0);
            x1=x0-(f1/fd1);
            cout<<" "<<endl;
            cout<<"x0"<<"  "<<"f1"<<"  "<<"fd1"<<"  "<<"x1"<<endl;
            cout<<x0<<"  "<<f1<<"  "<<fd1<<"  "<<x1<<endl;
        }
        root[k]=x1;//print root
        k++;
        synthetic[n]=0;//synthetic division
        int ct=0;
        for(int i=n-1,j=0; i>=0; j++, i--)
        {
            synthetic[i]=co_efficients[j]+(synthetic[i+1]*x1);//new polynomial function with the new root
            ct++;
        }

        for(int i=ct-1,j=0;i>=0;j++,i--)
            co_efficients[j]=synthetic[i];//will decrease a degree

        n--;
        x0=x1;//then again check from top



    }while(n>=1);
    for(int i=0; i<k; i++)
        cout<<"root"<<i+1<<":"<<root[i]<<endl;
}
