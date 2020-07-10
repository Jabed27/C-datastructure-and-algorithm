#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
void margearray(char num[],int p,int q,int r){
     int n1,n2;
     n1= q-p+1;
     n2= r-q;
     int L[n1+1],R[n2+1];
     for(int f = 0;f<n1;f++){
        L[f] = num[p+f];
     }
     for(int k = 0;k<n2;k++){
        R[k] = num[q+1+k];
     }
     L[n1]='}'; //'48'for dissending
     R[n2]='}'; //'48'for dissending
     for(int i =0,j=0,k = p;k<=r;k++){
        if((int)L[i]<=(int)R[j]){
            num[k] = L[i++];
        }else{
          num[k] = R[j++];
        }
     }
}
void margesort(char num[],int p,int r){
   if(p<r){
    int q = floor((p+r)/2);
    margesort(num,p,q);
    margesort(num,q+1,r);
    margearray(num,p,q,r);
   }
}
int main(){

  char num[9]={'a','b','a','c','a','d','a','e','f'};
  cout<<"usorted array is:"<<endl;
  for(int i = 0;i<9;i++){
    cout<<num[i]<<" ";
  }


  margesort(num,0,9-1);
  cout<<"After sort:"<<endl;
  for(int i = 0;i<9;i++){
    cout<<num[i]<<" ";
  }

}
