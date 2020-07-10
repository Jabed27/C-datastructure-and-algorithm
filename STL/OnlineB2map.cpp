#include<iostream>
#include<stdio.h>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    map<int,string>mp;

    for(int i=0;i<n;i++)
    {
        int x;
        string s;
        cin>>x>>s;
        mp[x]=s;
    }

    int q;

    cin>>q;

    if(mp.find(q)!=mp.end())
    {
        string str = mp[q];

        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
                cout<<(char)(str[j]+32);
            else
                cout<<str[j];
        }
    }

    else
        printf("NO STUDENT RECORD AVAILABLE");
}
