#include<bits/stdc++.h>
using namespace std;
int n,m;
int p[100];
    int w[100];

int knapSack(int m,int w[],int p[],int n){
    int a[n+1][m+1];
    int i,j;
     for(  i =1; i<=n; i++)
    {
        for(  j =1; j<=m; j++)
        {

            if(w[i]<=j)
            {

                a[i][j] = max(p[i]+a[i-1][ j-w[i] ],a[i-1][j]);
            }
            else
            {

                a[i][j] = a[i-1][j];
            }
     }

    }
    for(int k= 0;k<n;k++){
        for(int h =0;h<m;h++){
            cout<<a[k][h]<<" ";
        }
        cout<<endl;
    }
    return a[n][j];
}
int main()
{
    cout<<"Enter the number of item "<<endl;
    cin>>n;
    cout<<"Enter the beg capacity "<<endl;
    cin>>m;

   /* n = 3;m = 50;
    int  p [5] = {0,60, 100, 120};
    int  w [5] = {0,10, 20, 30};
    int a[4][51];*/
    cout<<"Enter all profit"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<"Enter all weight"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
      cout << knapSack(m, w, p, n);


}
