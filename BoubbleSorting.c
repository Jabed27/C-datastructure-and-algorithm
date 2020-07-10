#include<stdlib.h>
#include<bits/stdc++.h>
 using namespace std;

 int main(){
            int n;

         cin << n;
         int x[8];
         for(int i = 0;i<8;i++){

            cin << x[i];
         }
         int k = n;
         while(k!=0){
            int t = 0;
            for(int j = 0;j<k-1;j++){
                if(x[j]>x[j+1]){
                    swap(x[j],x[j+1]);
                    t = j;

                }

            }
            k = t;

         }


 }
