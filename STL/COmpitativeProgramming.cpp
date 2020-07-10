#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main(){
   map<int,int>mp;
   int n;
   cin>>n;
   int k;
   for(int i = 0;i<n;i++){

    k = i;
    int v;
    cin>>v;
    mp[k] = v;
   }
   int y;
   for(int j =0;j<n;j++){

    y = j;
    int u;
    cin>>u;
    mp[y]=u;
   }
   int g = 0;
   while(!mp.empty()){
        if(mp[g]==mp[k]){
            cout<<mp[g]<<"is situated is both side"<<endl;
        }
        else{
            g++;
        }
   }

}
