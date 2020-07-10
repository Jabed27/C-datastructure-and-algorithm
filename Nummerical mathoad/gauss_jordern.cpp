#include<bits/stdc++.h>  //gauss jordarn
using namespace std;
int a[100][100];
int main()
{
    int n;
    cout<<"enter the number of equ"<<endl;
    cin>>n;
    cout<<"Enter coefficients "<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n+1;j++){
           cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        double x = a[i][i];
        for(int j =0;j<n+1;j++){
            a[i][j] =  a[i][j]/x;
        }
        for(int j = 0;j<n;j++){
            if(i==j){
                continue;
            }
            double x=a[j][i];
            for(int k =0;k<n+1;k++){
                a[j][k] = a[j][k] - a[i][k]*x;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i][n]<<" ";
    }
}
