#include<bits/stdc++.h>
using namespace std;
int cost[1000];
int parent[100];

vector<pair<int,int>>v[1000];
priority_queue<pair<int, int>> pq;
int n,m,c;
char u,ver;
int min_cost=0;
void prims()
{

    for(int i =0; i<ver; i++)
    {
        cost[i] = INT_MAX;
        parent[i] = -1;
    }
    vector<bool> visited(n, false);
    int src = 0;
    pq.push(make_pair(0, src));
    cost[src] = 0;

    while(!pq.empty())
    {
        int u = (pq.top().second);
        pq.pop();
        visited[u] = true;
        for(int a = 0; a<v[u].size(); a++)
        {

            int vertex = v[u].at(a).first;
            int wt =v[u].at(a).second;
            if(!visited[vertex] && cost[vertex]>wt)
            {

                cost[vertex] = wt;
                pq.push(make_pair((cost[vertex]*(-1)),vertex));
                parent[vertex]=u;
            }

        }
    }
    cout<<"Source"<<"   "<<"Destination"<<"   "<<"Cost"<<endl;;
    for(int i =0; i<n; i++)
    {
      //  cout<<parent[i]<<"   "<<i<<"   "<<cost[i]<<endl;
        min_cost = min_cost + cost[i];
    }
    cout<<"min_cost : "<<min_cost<<endl;

}
int main()
{

    cin>>n>>m;
    for(int i =0; i<m; i++)
    {

        cin>>u>>ver>>c;
        v[u].push_back(make_pair(ver, c));
        v[ver].push_back(make_pair(u, c));

    }

    prims();
}
