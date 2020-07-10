#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

// Function to reverse a string


// Driver code
int main(void)
{
   string str;
   getline(cin,str);
   int n = str.size();
   char ch[n+1];
   for(int i = 0 ; i<n;i++){
       ch[i] = str[i];
   }
   for(int j = 0;j<n;j++){
    cout<<ch[j]<<endl;
   }

}
