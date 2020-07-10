#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    int x,y;
    arr[0] = INT_MIN;
    for(x = 2;x<=n;x++)
    {
        int t = arr[x];
        int i = x-1;
        while(t<arr[i])
        {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = t;
    }

}
int main()
{
    cout<<"Enter the number of the size "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int j = 1;j<=n;j++)
    {
        arr[j] = rand()%100;
    }
    cout<<"THe unsorted array is: "<<endl;
    for(int k = 1;k<=n;k++)
    {
        cout<<arr[k]<<" ";

    }
    cout<<endl;
    insertion(arr,n);
    cout<<"Now the sorted array is :"<<endl;
    for(int y = 1;y<=n;y++)
    {
        cout<<arr[y]<<" ";
    }
    cout<<endl;
}
