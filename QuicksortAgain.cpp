#include<bits/stdc++.h>
using namespace std;
int a[100];
int Partition(int lo,int hi){
        int pivot = a[hi] ;
        int i = lo-1;
        int  j = hi;
       while(true){
        while(a[++i]>pivot){}

       while(j>0&&a[--j]>pivot){}
       if(i>=j){
        break;
       }else{
        swap(a[i],a[j]);
       }

       }
       swap(a[i],a[hi]);
       return i;
}
int Partition_r(int lo,int hi){
      srand(time(NULL));
      int random =lo+ rand()%(hi-lo);
      swap(a[random],a[hi]);
      return Partition(lo,hi);
}
void quicksort(int lo,int hi){
      if(lo<hi){
    int p = Partition_r(lo,hi);
    quicksort(lo,p-1);
    quicksort(p+1,hi);
   }
}

int main(){
    srand(time(NULL));
   int n;
   cin>>n;
   for(int i =0;i<n;i++){
    a[i] = rand()%99;
   }
   cout<<"Unsorted array :"<<endl;
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   quicksort(0,n-1);
   cout<<"sorted array :"<<endl;
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

}
