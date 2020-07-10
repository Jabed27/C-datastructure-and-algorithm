#include<bits/stdc++.h>
using namespace std;    //tree making
#define mx 7
int arr[mx];
int tree[mx*3];
void printtree(){

         for(int i=1;i<=sizeof(tree)/sizeof(tree[1]);i++){
            cout<<tree[i]<<" ";
         }
}
          //     1,    1,    7
void init(int node,int b,int e){
    if(b==e){
        tree[node]=arr[b];
    //  tree[ 8 ] =arr[1]= 4
        return;
    }
      int left = node*2;
      int right = node*2+1;
      int mid = (b + e)/2;
      init(left,b,mid);
      init(right,mid+1,e);
      tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j){
        if(j>b||e<i){    //not intersect
            return 0;
        }
        if(b<i&&j<e){       //fully intersect
            return tree[node];
        }
      int left = node*2;
      int right = node*2+1;
      int mid = (b + e)/2;
     int p1= query(left,b,mid,i,j);
     int p2= query(right,mid+1,e,i,j);
      return p1+p2;
}
void update(int node,int b,int e,int k,int newvalue){
          if(k>e || k<b){
            return;
          }
          if(K>=e&&k<=b){
            tree[node]=newvalue;
            return;
          }
           int left = node*2;
           int right = node*2+1;
          int mid = (b + e)/2;
          update(left,b,mid,k,newvalue);
          update(right,mid+1,e,k,newvalue);
          tree[node] = tree[left]+tree[right];
}
int main(){
     int n;
     cout<<"Enter array size"<<endl;
     cin>>n;
     cout<<"Enter the element"<<endl;
     for(int i = 1;i<=n;i++){
        cin>>arr[i];
     }
     init(1,1,n);
     printtree();
     int i,j;
     cout<<"Enter range "<<endl;
     cin>>i>>j;
     cout<<query(1,1,n,i,j);
     printtree();
     cout<<endl;
     cout<<"Enter the index where you want to change"<<endl;
     cin>>k;
     cout<<"Enter changed value"<<endl;
     cin>>newvalue;
     update(1,1,n,k,newvalue);
     return 0;
}
