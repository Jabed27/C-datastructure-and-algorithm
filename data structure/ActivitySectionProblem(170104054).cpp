#include<bits/stdc++.h>
using namespace std;
int n,num,si,fi,k;
vector<int>v2;
vector<pair<int,pair<int,int>>>v;
void ActivitySection()
{
    sort(v.begin(),v.end());
    k = 0;
    v2.push_back(v[0].second.first);
    for(int i =1; i<n; i++)
    {
        if(v[i].second.second>v[k].first)
        {
            v2.push_back(v[i].second.first) ;
            k=i;

        }
    }
    cout<<"works are"<<endl;
    for(int i =0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }


}
int main()
{
    cout<<"Enter highest order: "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>fi>>num>>si;
        v.push_back(make_pair(fi,make_pair(num,si)));
    }
    ActivitySection();
}
/*
11
4 1 1
6 2 0
9 3 3
10 4 6
12 5 8
16 6 12
5 7 3
7 8 5
9 9 5
11 10 8
14 11 2
*/
