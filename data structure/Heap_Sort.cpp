#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i){
  int largest = i;
   int l = 2*i;
   int r = 2*i+1;
  if(l<=n&&a[l]>a[largest]){
    largest = l;
  }
  else{
    largest = i;
  }
  if(r<=n&&a[r]>a[largest]){
    largest = r;
  }
  if(largest!=i){
    swap(a[largest],a[i]);
    heapify(a,n,largest);
  }
}

void buildMaxheap(int a[],int n){
  for(int i = n/2;i>=1;i--){
    heapify(a,n,i);
  }
}

void heapsort(int a[],int n){
  buildMaxheap(a,n);
  for(int i =n;i>=2;i--){
    swap(a[1],a[i]);
    n=n-1;
    heapify(a,n,1);
  }
}

int main(){

    int n;
   cin>>n;
   int a[n+1];
   for(int i =1;i<=n;i++){
    cin>>a[i];
   }
   heapsort(a,n);
   cout<<"sort"<<endl;
   for(int i =1;i<=n;i++){
    cout<<a[i]<<" ";
   }
}
