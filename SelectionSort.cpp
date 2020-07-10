#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
         int n;
         cout<<"enter number to be sorted"<<endl;
         cin>>n;
         int arr[n+1];
         for(int i = 0;i<n;i++){
                arr[i] = rand()%100;
         }
         cout<<"\n";
         cout<<"The unsorted array"<<endl;
         for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
         }
          cout<<"\n";
         for(int j = n;j<=1;j--){
            int t = 0;
            for(int k = 2;k<=j;k++){
                if(arr[t]<arr[k]){
                    t  =  k;
                }
            }
            swap(arr[j],arr[t]);
         }
          cout<<"\n";
          cout<<"The sorted array"<<endl;
         for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
         }


}
