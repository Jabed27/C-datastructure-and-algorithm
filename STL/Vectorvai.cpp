#include<iostream>
#include<stdio.h>
#include<vector>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    int i;
    vector<char>v;
    string s;
    char ch;
    map<char,int>mp;
    cout << "Enter the string:" ;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        v.push_back(s[i]);//string will be pushed on to the vector like array
        ch = s[i];
        mp[ch]++;//because mp initially store 0
    }
    for(i = 0; i < v.size(); i++){
        ch = v[i];
        cout<<ch<<" = "<<mp[ch]<<endl;
    }
    return 0;
}


