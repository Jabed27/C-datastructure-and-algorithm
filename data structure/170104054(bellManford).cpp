#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > >v;
priority_queue<pair<int,pair<int,int> >>pq;

int n,m,u,c,ver;
int cost[100],parent[100];
void bellmanford(int src){
    for(int i =0; i<n; i++)
    {
        cost[i] = INT_MAX;
        parent[i] = -1;
    }

    cost[src] = 0;
    for(int i =0;i<n-1;i++){
        for(int j =0;j<m;j++){

             int vertex = v[j].second.second;
             int ud = v[j].second.first;
             int wt = v[j].first;

            if(cost[vertex]>(cost[ud]+wt)){
                cost[vertex] = cost[ud]+wt;
                parent[vertex] = ud;
                pq.push(make_pair(cost[vertex]*-(-1),make_pair(vertex,parent[vertex])));
            }
        }
    }
    for(int j = 0;j<m;j++){
           int vertex =  v[j].second.second;
           int ud = v[j].second.first;
           int wt = v[j].first;
        if(cost[vertex]>cost[ud]+wt){
            cout<<"negative cycle detected"<<endl;
            return;

        }
    }
   for(int i =1;i<=n;i++){
     printf("\n%d > %d \t\t  %d",src,i,cost[i]);
   }
   //cout<<"shortest path"<<endl;
   //cout<<"Source "<<pq.top().second.second<<"destination "<<pq.top().second.first<<"cost"<<pq.top().first<<endl;


}
int main(){
 cin>>n>>m;
 for(int  i = 0;i<m;i++){
    cin>>c>>u>>ver;
    v.push_back(make_pair(c,make_pair(u,ver)));
 }
 bellmanford(1);
}
