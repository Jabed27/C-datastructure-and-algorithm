#include<bits/stdc++.h>
using namespace std;
int n,m,u,c,ver;
int cost[100],parent[100];
vector<pair<int ,int>>v[100];
priority_queue<pair<int ,int>>pq;
void printingpath(int parent[],int j){
   if(parent[j] == -1){
    return;
   }
   printingpath(parent,parent[j]);
   printf("%d",j);
}
void dijkstra(){
      for(int i =0;i<n;i++){
        cost[i] = INT_MAX;
        parent[i] = -1;
      }
      vector<bool>visited(n,false);
      int src = 1;
      cost[src] = 0;
      pq.push(make_pair(0,src));
      while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for(int i =0;i<v[u].size();i++){
            int vertex = v[u].at(i).first;
            int wt = v[u].at(i).second;
            if(!visited[vertex]&&cost[u]!=INT_MAX&&cost[vertex]>wt){
                cost[vertex] = wt+cost[u];
                parent[vertex] = u;
                pq.push(make_pair(cost[vertex]*(-1),vertex));
            }
        }
      }
      for(int i =0;i<n;i++){
        printf("\n%d > %d \t\t %d \t\t %d",src,i,cost[i],src);
        printingpath(parent,i);
      }

}
int main(){
   cin>>n>>m;
   for(int i =0;i<m;i++){
    cin>>u>>ver>>c;
    v[u].push_back(make_pair(ver,c));
    v[ver].push_back(make_pair(u,c));
   }
   dijkstra();
}
