#include<bits/stdc++.h>
using namespace std;
int n;                  //secand mathod
double A[100];
double func(double x){
     double result  = A[n];
     for(int i = n;i>=0;i--){
        result =  result*x+A[i];
     }
     return result;
}
int main()
{
    cout<<"degree"<<endl;
    cin>>n;
    for(int i = n;i>=0;i--){
        cout<<"a"<<i<<endl;
        cin>>A[i];
    }
    double f1,f2,f3,x1,x2,x3,E;
    double it = 0.0;

        cout<<"enter x1:"<<endl;
        cin>>x1;
        cout<<"enter x2:"<<endl;
        cin>>x2;
        f1 = func(x1);
        f2 = func(x2);
        x3 = ((f2*x1)-(f1*x2))/(f2-f1);
        f3 = func(x3);
        E = 0.00001;
       double err = fabs((x3-x2)/x3);
       cout << "Iteration  " << "x1        " << "x2    " << "x3          " << "f1         " << "f2       " << "f3    " << "   error  " << endl;
        while(true){
             it++;
             printf("%lf \t\t %lf \t\t %lf \t\t %lf \t\t %lf \t\t%lf\t\t%lf",it,x1,x2,x3,f1,f2,f3,err);
             if(fabs((x3-x2)/x3)<E)        {            cout << "Root is " << x3 ;            break;        }
        x1 = x2;
        x2 = x3;

        }

}
