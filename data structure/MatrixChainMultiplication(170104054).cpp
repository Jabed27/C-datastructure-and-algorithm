#include<bits/stdc++.h>
using namespace std;
int MatrixChainMultiplication(int p[],int n)
{
    int m[n][n] ;
    int s[n][n] ;
    for (int i=1; i<n; i++)
    {
        m[i][i] = 0;
        s[i][i] = 0;
    }


    int j,minimum,q;
    for(int d = 1; d<n-1; d++)
    {
        for(int i = 1; i<n-d; i++)
        {
            j = i+d;
            m[i][j] = INT_MAX;
            for(int k = i; k<=j-1; k++)
            {
                q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]= q;
                    s[i][j] = k;
                }
            }

        }
    }
    return m[1][n-1];
}
int main()
{
    int n,i;
    printf("Enter number of matrices\n");
    cin>>n;


    int arr[n+1];

    cout<<"Enter dimension"<<endl;
    for(i=0; i<n; i++)
    {
        printf("Enter d%d :: ",i);
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum number of multiplications is %d ", MatrixChainMultiplication(arr, size));
}
