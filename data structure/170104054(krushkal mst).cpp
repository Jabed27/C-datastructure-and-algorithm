#include<bits/stdc++.h>
using namespace std;
vector< pair < int, pair < int , int > > >v;
int n,m,c;
int sum = 0;
int u,ver;
int parent[100];
int findrepresentative(int r)
{
        if(parent[r]==r){
            return r;
        }
        else{
          return  findrepresentative(parent[r]);
        }
}
int mst(int n){
      sort(v.begin(), v.end());
      for (int i = 1; i <= n; i++){
        parent[i] = i;
      }
      for(int i = 0 ;i<n;i++){
        int x = findrepresentative(v[i].second.first);
        int y = findrepresentative(v[i].second.second);
        int w = v[i].first;
         if(x!=y){
            parent[y] = x;
            sum = sum+w;
         }
      }
     cout<<"total cost"<<sum<<endl;
}
int main(){
    cin>>n>>m;
    for(int i =0; i<m; i++)
    {

        cin>>u>>ver>>c;
        v.push_back(make_pair(c,make_pair(u,ver)));

    }
    cout << mst(n) << endl;
}
