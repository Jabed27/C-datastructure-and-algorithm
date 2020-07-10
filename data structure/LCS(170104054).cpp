#include<bits/stdc++.h>
using namespace std;
string x,y;
int c[100][100];
int m,n;
int h [100];
char a[100];
int main(){
   /* x = "AGGTAB";
    y = "GXTXAYB";
    */
    getline(cin,x);
    getline(cin,y);
     m = x.length();
    n = y.length();
    for(int i =0;i<=m;i++){
        c[i][0] = 0;
    }
    for(int j =0;j<=n;j++){
        c[0][j] = 0;
    }

    for(int i= 0;i<=m;i++){
        for(int j =0;j<=n;j++){
            if(x[i]==y[j]){
                c[i][j] = c[i-1][j-1]+1;
                 a[i] = x[i];
                for(int k =0;k<strlen(a);k++){
                    if(a[k]==y[j]){
                        h[i] = a[i];

                    }
                }


            }else{
                  c[i][j] = max(c[i-1][j],c[i][j-1]);
            }
        }
    }
    for(int i =-1;i<m;i++){
        for(int j =-1;j<n;j++){
             cout<<c[i][j]<<" ";   //printing er jonno
        }
       cout<< endl;
    }

    cout<<"Length is = "<<c[m-1][n-1];
    int p = strlen(a);
    for(int i =0;i<p;i++){
        cout<<a[i]<<" ";
    }


}
