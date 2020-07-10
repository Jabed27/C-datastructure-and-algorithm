#include<bits/stdc++.h>
using namespace std;
string x,y;
int n,m;
int a[100][100];
int main(){


  getline(cin,x);
  getline(cin,y);

   m = x.length();
   n = y.length();

   for(int i =0;i<=m;i++){
        a[i][0] = 0;
    }
    for(int j =0;j<=n;j++){
        a[0][j] = 0;
    }
  for(int i =0;i<=m;i++ ){
    for(int j =0;j<=n;j++){
        if(x[i]==y[j]){
            a[i][j] = a[i-1][j-1]+1;
        }else{
            a[i][j] = max(a[i-1][j],a[i][j-1]);
        }
    }
  }

  for(int i =-1;i<m;i++){
        for(int j =-1;j<n;j++){
             cout<<a[i][j]<<" ";   //printing er jonno
        }
       cout<< endl;
    }
  cout<<a[m-1][n-1];


}
