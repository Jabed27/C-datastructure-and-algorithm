#include<bits/stdc++.h>
using namespace std;
double x[10],y[10];
double xp,d[10][10],a[10];
int n;
int main(){
 cout<<"enter term"<<endl;
 cin>>n;
 cout<<"enter x and y "<<endl;
 for(int i =1;i<=n;i++){
    cin>>x[i]>>y[i];
    d[i][1] = y[i];
 }
 for(int j =2;j<=n;j++){
    for(int i =1;i<=n-j+1;i++){
        d[i][j] = (d[i+1][j-1]-d[i][j-1])/(x[i+j-1]-x[i]);
    }
 }
 for(int i =1;i<=n;i++){
    a[i] = d[1][i];
 }
 cout<<"xp daw"<<endl;
 cin>>xp;
 double sum =0.0;
 for(int i =2;i<=n;i++){
    double pi = 1.0;
    for(int j =1;j<=i-1;j++){
        pi*=(xp-x[j]);
    }
    sum +=a[i]*pi;
 }
 cout<<"sum "<<sum<<endl;

}
