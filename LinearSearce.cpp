#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;
int main(){
      int arr[5];
      int x;
      cout<<"write an array"<<endl;
      for(int i = 0;i<5;i++){

        cin>>arr[i];
      }
      cout<<"what element do you want to find"<<endl;
      cin>>x;

      for(int j = 0;j<5;j++){
           if(arr[j] == x){
            return j;
           }

      }
          return -1;
}
