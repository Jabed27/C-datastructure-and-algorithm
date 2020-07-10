#include<iostream>
#include<stdio.h>
#include<cstring>
#include<queue>
using namespace std;
int main(){
      priority_queue<int>q;
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
        int input ;
        scanf("%d",&input);
        q.push(-input);
      }
      while(!q.empty()){
        int j = q.top();
        printf("%d",-j);
        q.pop();
      }
}

