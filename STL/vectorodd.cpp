#include<iostream>
#include<vector>
#include<stdio.h>
#include<map>
using namespace std;
int main(){
     map<int ,string>mp;
     int i;
     string s;
     int n;
     cin>>n;
     for(int p=0;p<n;p++){
         cin>>i>>s;
         mp[i] = s;
     }
     int q;
     cout<<"Enter you desired number :"<<endl;
     cin>>q;
     if(mp.find(q)!=mp.end()){
        string v = mp[q];
        for(int j = 0;j<v.size();j++){
            if(v[j]=='A'||v[j]=='E'||v[j]=='I'||v[j]=='O'||v[j]=='U'){
                cout<<(char)(v[j]+32);
            }
            else{
                cout<<v[j];
            }
        }
     }else{
         cout<<"sorry you have entered wrong"<<endl;
     }
}
