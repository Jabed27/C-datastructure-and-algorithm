#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void boublesort(int arr[],int n)
{
    int i,j;
    bool swapped;
          for(i = 0; i < n-1; i++)
          {
              swapped = false;
              for(j = 0; j < n-i-1; j++)
              {
                  if(arr[j]>arr[j+1])
                  {
                      swapped = true;
                      swap(arr[j],arr[j+1]);
                  }
              }
              if(swapped == false)
              {
                  break;
              }
          }

}
void printarray(int arr[],int n)
{
         for(int l = 0;l<n;l++)
         {
             cout<<arr[l]<<" ";
         }
         cout<<endl;

}
int main()
{
    int arr [] = {21,34,56,78,99,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The unsorted array is :"<<endl;
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    boublesort(arr,n);
        cout<<"The sorted array is :"<<endl;

    printarray(arr,n);
}
