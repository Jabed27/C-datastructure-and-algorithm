#include<iostream>
#include<iterator>
#include<string.h>
#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int main(){

      map<string,double>mp;
      vector<string>v;
      int n;
      cin>>n;
      for(int i = 0;i<n;++i){
        string s;
        double d;
        cin>>s>>d;
        mp[s] = d;
        v.push_back(s);
      }

        for(int y =0;y<n-1;++y){
            if(v[y]>v[y+1]){
                swap(mp[v[y]],mp[v[y+1]]);
                swap(v[y],v[y+1]);
            }
        }

     for(int h = 0;h<n;++h){
       cout<< v[h]<<endl;
     }

}
