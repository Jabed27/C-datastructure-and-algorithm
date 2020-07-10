/*#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int ar[],int l,int r,int x);
int main(){

        int ae[7] = {3,6,8,2,9,10,33};
        cout<<"what element do you want to search ?"<<endl;
        int x;
        cin>> x;
        int result = binarysearch(ae,0,7,x);
        if(result == -1){
            cout<<"not founded"<<endl;
        }
        else{
            cout<<"element is founded at"<<result<<endl;
        }

}
int binarysearch(int ar[],int l,int r,int x){
                     while(r>=l){
                           int mid = l + (r-l)/2;
                           if(ar[mid]  ==  x){
                            return mid;
                           }
                           if(ar[mid]<x){
                            l = mid+1;
                           }
                           else
                            r = mid-1;

                     }
                     return -1;
}*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int L,int R,int searching_number){
    while(R>=L){
        int midelvalue=L+(R-L)/2;
        if(arr[midelvalue]==searching_number){
            return midelvalue;
        }
        else if(midelvalue<searching_number){
            L = midelvalue+1;
        }else{
            R=midelvalue-1;
        }
    }
    return -1;
}
int main()
{
   int size,arr[10],searching_number;
   cout<<"Enter an Array size:"<<endl;
   cin>>size;
   for(int i=0;i<size;i++){
       cin>>arr[i];
   }
   cout<<"Enter a number that you want to find in your given array"<<endl;
   cin>>searching_number;
  int result= binarySearch(arr,0,size-1,searching_number);
  if(result==-1){
      cout<<"Sorry this doesn't exists "<<endl;
  }else{
      cout<<"it presents in:"<<result<<"position"<<endl;
  }
    return 0;
}
