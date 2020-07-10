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
       string q;
       cin>>q;
       if(mp[q]){
         if(mp[q]>=80){
        cout<<"A+"<<endl;
       }else{
        cout<<"not A+";
       }

       }
        else{
        cout<<"No student found in this name"<<endl;
       }

}
