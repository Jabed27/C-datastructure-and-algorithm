#include<bits/stdc++.h>
using namespace std;
int color[1000];
vector<int>v[1000];
void BFS(int source){
    int u,a;
    queue<int>q;
    color[source] = 1;
    q.push(source);
    while(!q.empty()){
        u = q.front();
        q.pop();
        cout<<" "<<u;
        for(int i =0;i<v[u].size();i++){
            a = v[u].at(i);
            if(color[a]==0){
                q.push(a);
                color[a]=1;
            }
        }

    }
}
void DFS(int source){
     int a;
     color[source] = 1;

     for(int i =0;i<v[source].size();i++){
        a = v[source].at(i);
        if(color[a]==0){
            DFS(a);
        }
     }
     cout<<source<<" ";
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
    cout<<"BFS is:"<<endl;
    BFS(4);

    for(int i =0;i<=n;i++){
        color[i]= 0;
    }
     cout<<endl;
    cout<<"DFS"<<endl;
    DFS(4);

}

