#include<bits/stdc++.h>
using namespace std;
#define INF 99999
int a[10][10],parent[10][10];
int n,k,src,dest;
void floyd_warshall()
{
    for(int k =0; k<n; k++)
    {
        for(int i =0; i<n; i++)
        {
            for(int j =0; j<n; j++)
            {
                if(a[i][j]>a[i][k]+a[k][j])
                {
                    a[i][j] = a[i][k]+a[k][j];

                }
            }
        }
    }
    cout<<"now the distance table will be ."<<endl;

    for(int i =0; i<n; i++)
    {

        for(int j =0; j<n; j++)
        {

            cout<<a[i][j]<<"\t\t";
        }
        cout<<endl;
    }

}


int main()
{
    cin>>n;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    floyd_warshall();
}
/*4
0 5 100000 10
100000 0 3 100000
100000 100000 0 1
100000 100000 100000 0*/
