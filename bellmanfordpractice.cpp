#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int>>>v;
int n,m,u,ver,c,vertex,ud,wt;
int cost[100],parent[100];
void bellmanford(int src){
     for(int i=0;i<n;i++){
        parent[i] = -1;
        cost[i] = INT_MAX;
     }
     src = 0;
     cost[src] = 0;
     for(int i =0;i<n-1;i++){
        for(int j = 0;j<m;j++){
                vertex = v[j].second.second;
                ud = v[j].second.first;
                wt = v[j].first;
            if(cost[vertex]>(cost[ud]+wt)){
                cost[vertex] = cost[ud]+wt;
                parent[vertex] = ud;
            }
        }
     }
        for(int i =0;i<m;i++){
           vertex = v[i].second.second;
                ud = v[i].second.first;
                wt = v[i].first;
                if(cost[vertex]>(cost[ud]+wt)){
                    cout<<"Negative cycle detected"<<endl;
                    return;
                }
        }
        cout<<"source"<<" "<<"dest"<<"\t\t"<<"path cost"<<endl;
        for(int i = 1;i<n;i++){
            printf("\n%d > %d \t\t %d ",src,i,cost[i]);
        }


}
int main()
{
    cin>>n>>m;
    for(int i =0;i<m;i++){
        cin>>c>>u>>ver;
        v.push_back(make_pair(c,make_pair(u,ver)));
    }
    bellmanford(1);
}
