#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[200];
int Partition(int lo,int hi){
    int pivot = a[hi] ;
    int i = lo-1;
    int  j = hi;
     while(true){
        while(a[++i]<pivot){

        }
        while(j>0&&a[--j]>pivot){

        }
        if(i>=j){
            break;
        }else{
           swap(a[i],a[j]);
        }

     }
     swap(a[i],a[hi]);
     return i;
}
void quicksort(int lo,int hi){
   if(lo<hi){
    int p = Partition(lo,hi);
    quicksort(lo,p-1);
    quicksort(p+1,hi);
   }
}

int main(){
   int n;
   cout<<"enter the array size"<<endl;
   cin>>n;

   for(int i = 0;i<n;i++){
     a[i] = rand()%100;
   }
   cout<<"the unsorted array is:"<<endl;
   for(int j =0;j<n;j++){
    cout<<a[j]<<" ";
   }
   cout<<endl;
   quicksort(0,(n-1));
   cout<<"the sorted array is:"<<endl;
   for(int k =0;k<n;k++){
    cout<<a[k]<<" ";
   }
}
