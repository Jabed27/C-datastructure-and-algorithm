a#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
int color[1000];
int parent[110];
vector<int>v[1000];
void BFS(int source)
{
    int u,a,s,k;
    color[source] = 1;
    s = source;
    k = v[source].size();
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        u = q.front();
        q.pop();
        cout<<" "<<u;
        for(int i =0;i<v[u].size();i++){
            a = v[u].at(i);

            if(color[a]==0){
                color[a] = 1;
                 parent[a] = u;
                q.push(a);

            }
            else if(parent[u]!=a){
                cout<<"there is a cycle"<<endl;
            }

        }

    }


}
int main()
{
    int n,m;
    cin>>n>>m;
    int u,ver;
    for(int i =0;i<m;i++){
        cin>>u>>ver;
        v[u].push_back(ver);
        v[ver].push_back(u);

    }
    cout<<"BFS"<<endl;
    BFS(1);

}

