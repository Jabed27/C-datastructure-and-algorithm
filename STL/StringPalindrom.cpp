#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
       char str1[30],str2[30];
       gets(str1);
       int i,j;
       int flag = 0;
       int len = 0;
       len = strlen(str1)-1;
       for(i=len, j = 0;i>=0;i--,j++){
        str2[j] = str1[i];
       }
       if(strcmp(str1,str2)){
        flag=1;
       }
       if(flag == 1){
        cout<<"palindrom"<<endl;
       }else{
        cout<<"no"<<endl;
       }
 }
