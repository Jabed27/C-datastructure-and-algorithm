#include<bits/stdc++.h>
using namespace std;
int cost[100];
int parent[100];
int n,m,c;
vector<pair<int,int> >v[100];
priority_queue<pair<int, int>> pq;
void printingPath(int parent[], int j)
{
    if (parent[j] == - 1)
        return;

    printingPath(parent, parent[j]);

    printf("%d ", j);
}


int u,ver;
int min_cost;
int vertex;
void prims()
{

    for(int i =0; i<n; i++)
    {
        cost[i] = INT_MAX;
        parent[i] = -1;
    }
    vector<bool> visited(n, false);
    int src = 0;
    cost[src] = 0;
    pq.push(make_pair(0, src));


    while(!pq.empty())
    {
        int u = (pq.top().second);
        pq.pop();
        visited[u] = true;
        for(int a = 0; a<v[u].size(); a++)
        {

            vertex = v[u].at(a).first;
            int wt =v[u].at(a).second;
            if(!visited[vertex]&&cost[u]!=INT_MAX &&cost[vertex]>wt)
            {
                cost[vertex] = wt+cost[u];
                pq.push(make_pair(cost[vertex]*(-1),vertex));
                parent[vertex]=u;
            }

        }
    }
    for (int i = 1; i < n; i++)
    {
        printf("\n%d -> %d \t\t %d\t\t%d ",src, i, cost[i],src);
        printingPath(parent, i);
    }

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

