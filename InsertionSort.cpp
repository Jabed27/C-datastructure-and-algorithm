#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
int main(){
    int n;
    int l = 1;///for compare
    int sum = 0;
    int h = 0;
    int sum2 = 0;
    cout<<"Enter the number to be sorted"<<endl;
    cin>>n;
    int arr[n+1];

     arr[0] = INT_MIN;
      for(int j = 1;j<=n;j++){
           arr[j] = rand()%1000;
      }
       cout<<"\n";
       cout<<"the unsorted array"<<endl;
       for(int j= 0;j<n;j++){
        cout<<arr[j]<<" ";
       }
       cout<<"\n";
       for(int j = 2;j<=n;j++){
             int t= arr[j];
             int i = j-1;
             while(t<arr[i]){
                    h++;
                arr[i+1] = arr[i];
                i = i-1;
                l++;
             }
             arr[i+1] = t;
               sum =  sum+l;
             sum2 = sum2+h;
       }
       cout<<"\n";
       cout<<"The sorted array"<<endl;
       for(int k = 0;k<n;k++){
           cout<<arr[k]<<" ";
       }
       cout<<"Number of comparison is: "<<sum<<endl;
       cout<<"Number of movement is:  "<<sum2<<endl;

}
