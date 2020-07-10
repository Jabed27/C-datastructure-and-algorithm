#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
int main(){
       map<string,int>mp;
       int n;
       cout<<"size?"<<endl;
       cin>>n;
       for(int j= 0;j<n;j++){
         string s;
         int i;
        cin>>s>>i;
        mp[s] = i;
       }

}
