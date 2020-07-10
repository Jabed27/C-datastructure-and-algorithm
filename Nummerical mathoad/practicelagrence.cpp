#include<bits/stdc++.h>
using namespace std;
int n ;
double x[10],y[10],xp;
int main(){
 cin>>n;
 for(int i =0;i<n;i++){
     cin>>x[i];
 }

 for(int i =0;i<n;i++){
     cin>>y[i];
 }
 cin>>xp;
 double sum =0.0;
 for(int i =0;i<n;i++){
    double num = 1.0,den = 1.0;
    for(int  j =0;j<n;j++){
        if(i!=j){
            num*=(xp-x[j]);
            den = (x[i]-x[j]);
        }
    }
    sum+=(num/den)*y[i];
 }
 cout<<sum<<endl;

}
