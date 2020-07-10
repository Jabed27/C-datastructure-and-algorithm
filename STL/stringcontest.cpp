#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string s1,s2;
    cin>>s1;
    cin>>s2;
     if(s1 == s2){
                cout<<"No spies were found!";
            }

    if(s1.size()<=10000000 && s2.size()<=10000000){

       for(int j =0;j<s2.size();j++){
           for(int i = 0;i<s1.size();i++){
               if(s2[j]==s1[i]){
                 break;
               }
               else if(s2[j]!=s1[i]){
                  if(s1[i]==s1[s1.size()-1]){
                    cout<<s2[j];
                  }
               }

               }
           }
       }
        }






