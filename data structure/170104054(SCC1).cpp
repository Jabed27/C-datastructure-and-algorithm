#include<bits/stdc++.h>
using namespace std;

int color[1000];
int color1[1000];
vector<int>adj[1000];
vector<int>v2[1000];
stack<int>q;
vector<int>component[10];
void DFS(vector <int>v1[],int source){
     int a;
     color[source] = 1;

     for(int i =0;i<v1[source].size();i++){
        a = v1[source].at(i);
        if(color[a]==0){
            DFS(v1,a);
        }
     }

     q.push(source);
}

void DFS1(vector<int>v2[],int source,int mark){

     component[mark].push_back(source);
     //cout<<" "<<component[mark].size();
     color1[source] = 1;
      for(int i =0;i<v2[source].size();i++){
         int a = v2[source][i];
        if(color1[a]==0){
            DFS1(v2,a,mark);
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
        adj[u].push_back(ver);
        v2[ver].push_back(u);
    }
     for (int i=1;i<=n;i++)
        {
            if(color[i]==0)
                DFS(adj,i);
        }


        int mark = 0;
        while(!q.empty()){
            int u = q.top();
            q.pop();
             if(color1[u]==0){
                    mark = mark+1;
                    DFS1(v2,u,mark);
             }

        }

        cout<<"Number of Components: "<<mark<<endl;
        for(int i=1;i<=mark;i++)
            {
                int Size=component[i].size();
                for(int j=0;j<Size;j++)
                {
                    cout<<component[i][j]<<" ";
                }
                cout<<endl;
            }
}

