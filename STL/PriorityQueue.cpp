#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<char>q;

     string s;
     cin>>s;
     int n = s.size();
     for(int i=0;i<s.size();i++){
        q.push(s[i]);
     }
      int h = 0;
     while(!q.empty()){

        char j = q.top();

        cout<<j<<endl;
     q.pop();

     }

}
