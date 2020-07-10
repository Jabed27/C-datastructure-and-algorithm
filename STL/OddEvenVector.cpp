#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main(){
      vector<int>v;
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back(input);
      }
      int odd = 0;
      int even = 0;
      for(int j =0;j<n;j++){
        if(v[j]%2==0){
            even = even + v[j];
        }
        else{
            odd = odd + v[j];
        }

      }
      if(even>odd){
        printf("Yes");
      }else{
         printf("no");
      }
}
